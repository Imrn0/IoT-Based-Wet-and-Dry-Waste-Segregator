#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <ESP32Servo.h>
#include <HX711.h>

// Pin definitions
#define TRIG_PIN 12
#define ECHO_PIN 13
#define SERVO_PIN 14
#define BUZZER_PIN 27
#define SOIL_MOISTURE_PIN 34
#define LOADCELL_DOUT_PIN 32
#define LOADCELL_SCK_PIN 33

// Initialize components
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;
HX711 loadCell;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Detecting Waste");

  // Initialize servo
  servo.attach(SERVO_PIN);
  servo.write(90); // Initial position

  // Initialize load cell
  loadCell.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  loadCell.set_scale();
  loadCell.tare();

  // Initialize pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(SOIL_MOISTURE_PIN, INPUT);
}

void loop() {
  // Detect waste using ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;

  if (distance < 15) { // Waste detected within 30 cm
    // Sound the buzzer
    digitalWrite(BUZZER_PIN, HIGH);
    delay(1000);
    digitalWrite(BUZZER_PIN, LOW);

    // Check moisture level
    int moistureValue = analogRead(SOIL_MOISTURE_PIN);
    lcd.clear();
    lcd.setCursor(0, 0);

    if (moistureValue <4000) { // Wet waste
      servo.write(160); // Turn left for wet waste
      lcd.print("WET");
      Serial.println(" ==> Wet Waste");
      Serial.println(moistureValue); 
      // Turn left for wet waste
    } else { // Dry waste
      servo.write(20);
      lcd.print("DRY");
      Serial.println(" ==> Dry Waste");
      Serial.println(moistureValue); 
       // Turn right for dry waste
    }

    delay(3000); // Hold servo position
    servo.write(90); // Reset servo position

    // Measure weight
    float weight = loadCell.get_units(10);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Weight: ");
    lcd.print(weight);
    lcd.print(" g");
     //print moisture value on serial monitor
    Serial.print("Moisture Value: ");
       Serial.println(moistureValue);
       Serial.print("Weight Value");
       Serial.println(weight);
  }

  delay(2000); // General delay between operations
}