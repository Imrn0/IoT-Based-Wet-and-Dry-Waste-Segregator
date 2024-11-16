Waste Segregator System
Overview
The Waste Segregator System is an IoT-based project developed by a team from SJEC College, Mangalore to automate waste detection and sorting. The system utilizes various sensors to identify and categorize waste as wet or dry. It also measures the weight of the waste and provides real-time feedback.

Though initially planned to integrate with a database, we faced several challenges that led us to complete the project without it. However, the system still functions efficiently, providing automated waste segregation and basic data output.

Team Members
Preethesh
Stian
Winston
Imran 
Prithesh
Project Features
Waste Detection: Uses an ultrasonic sensor to detect waste and trigger the sorting mechanism.
Waste Classification: A soil moisture sensor differentiates between wet and dry waste.
Weight Measurement: A load cell sensor measures the weight of the waste.
Real-Time Feedback: LCD display shows waste type and weight.
Alerts: A buzzer sounds when waste is detected.
Challenges Faced
Database Integration Issues: We initially planned to integrate a database for storing waste data, but encountered connectivity issues with the ESP32 Wi-Fi module. Despite multiple attempts, we could not overcome the Wi-Fi-related issues, which prevented us from connecting to the database.

Power Consumption Problems: The system uses components with high power consumption (LCD, servo motor, and load cell). This led to a brownout condition, where the system experienced voltage drops and instability, making the system unreliable at times.

Despite these setbacks, we managed to complete the project without the database and ensured that the core functionalities—waste detection, classification, and weight measurement—worked perfectly.

Technologies Used
ESP32 Microcontroller: Handles the system’s logic and sensors.
Ultrasonic Sensor (HC-SR04): Detects waste presence.
Soil Moisture Sensor: Identifies wet vs dry waste.
Load Cell with HX711: Measures the weight of the waste.
Servo Motor: Directs waste into the appropriate bin.
LCD (16x2): Displays real-time data.
Buzzer: Alerts when waste is detected.
How to Set Up
Hardware Components:

ESP32 Development Board
Ultrasonic Sensor (HC-SR04)
Soil Moisture Sensor
Load Cell with HX711 Amplifier
Servo Motor
LCD (16x2 with I2C)
Buzzer
Connections:

Connect the sensors and servo to the appropriate pins on the ESP32.
Set up the LCD display via I2C for minimal wiring.
Ensure proper power supply for all components to avoid brownout issues.
Software Setup:

Install necessary libraries for ESP32, ultrasonic sensor, servo motor, HX711 load cell, and LCD.
Clone this repository and upload the code to your ESP32 using Arduino IDE.
Monitor the system’s data through the LCD and adjust the components based on the feedback.
Future Enhancements
Though the project was completed without database integration, future versions of the Waste Segregator System may include:

Database Integration: Resolving connectivity issues to allow data storage and access from a cloud-based database.
Optimization of Power Consumption: Using low-power components to avoid brownout issues.
Mobile and Web Integration: Enabling notifications for garbage collectors and remote monitoring of the system.
Acknowledgments
We would like to thank SJEC College, Mangalore for providing the resources and support throughout the development of this project. Special thanks to our professors and mentors for their guidance.

