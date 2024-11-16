The **Waste Segregator System** is an IoT-based project developed by a team from **SJEC College, Mangalore** to automate waste detection and sorting. The system uses various sensors to detect and categorize waste into **wet** and **dry** types. It also measures the weight of the waste and provides real-time feedback, helping to streamline waste management processes.

While we initially planned to integrate a database for remote data storage, we encountered several challenges related to the ESP32 Wi-Fi module. Despite these hurdles, the system operates efficiently, performing automated waste segregation and basic data output, without the need for a database.

---

## **Team Members**

- **Preethesh** 
- **Stian**
- **Winston** 
- **Imran** 
- **Prithesh**

---

## **Project Features**

- **Waste Detection:** The ultrasonic sensor detects waste and triggers the sorting mechanism.
- **Waste Classification:** The soil moisture sensor differentiates between wet and dry waste based on moisture content.
- **Weight Measurement:** A load cell sensor measures the weight of the waste.
- **Real-Time Feedback:** The system provides real-time feedback via an LCD display, showing the waste type and weight.
- **Alerts:** A buzzer sounds when waste is detected and the sorting mechanism is activated.

---

## **Challenges Faced**

### **1. Database Integration Issues**
We initially planned to integrate a cloud database for storing waste data. However, we faced significant connectivity issues with the **ESP32 Wi-Fi module**. Despite several attempts, we were unable to resolve the Wi-Fi-related issues, which prevented us from connecting the system to a remote database.

### **2. Power Consumption Problems**
The system uses high-power components such as the LCD display, servo motor, and load cell. This led to **brownout conditions** (voltage drops), which caused the system to become unstable at times. To address this, we made adjustments to optimize power usage, but the challenge of managing high power consumption remains.

Despite these challenges, we were able to complete the project, ensuring that core functionalities like waste detection, classification, and weight measurement were fully operational.

---

## **Technologies Used**

- **ESP32 Microcontroller:** Handles the system's logic, communication, and sensors.
- **Ultrasonic Sensor (HC-SR04):** Detects waste presence in proximity.
- **Soil Moisture Sensor:** Differentiates wet waste from dry waste based on moisture content.
- **Load Cell with HX711:** Measures the weight of the waste.
- **Servo Motor:** Directs the waste into the appropriate bin.
- **LCD (16x2 with I2C):** Displays real-time data (weight and waste type).
- **Buzzer:** Provides an audible alert when waste is detected.

---

## **How to Set Up**

### **Hardware Components:**

- ESP32 Development Board
- Ultrasonic Sensor (HC-SR04)
- Soil Moisture Sensor
- Load Cell with HX711 Amplifier
- Servo Motor
- LCD (16x2 with I2C)
- Buzzer

### **Connections:**

1. **ESP32 and Sensors:** 
   - Connect the ultrasonic sensor, soil moisture sensor, load cell, and servo motor to the appropriate pins on the ESP32 board.
   - Connect the LCD display via I2C for minimal wiring.
   - Ensure proper power supply to avoid brownout issues and ensure stable operation.

2. **Wiring Considerations:**
   - Use correct power ratings and connections for each sensor and actuator to ensure system stability.

### **Software Setup:**

1. Install the required libraries for ESP32, ultrasonic sensor, servo motor, HX711 load cell, and LCD.
2. Clone this repository to your local machine.
3. Open the project in **Arduino IDE**.
4. Upload the code to the **ESP32**.
5. Monitor the system's data via the LCD display and adjust sensor readings as needed.

---

## **Future Enhancements**

Although the project was completed without database integration, we plan to enhance the system in the future:

- **Database Integration:** Resolve connectivity issues with the ESP32 to enable cloud-based data storage for waste records.
- **Power Consumption Optimization:** Use low-power components to reduce brownout issues and improve system reliability.
- **Mobile and Web Integration:** Integrate the system with a mobile app or web dashboard to enable notifications to garbage collectors when bins are full and monitor waste data remotely.

---

## **Acknowledgments**

We would like to extend our gratitude to **SJEC College, Mangalore** for providing the necessary resources and support throughout the development of this project. Special thanks to our professors and mentors for their valuable guidance and feedback.
