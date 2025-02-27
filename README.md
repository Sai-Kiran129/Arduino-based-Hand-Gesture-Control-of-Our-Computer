# Arduino-based Hand Gesture Control of Our Computer

##  Project Overview
This project introduces an innovative **Human-Computer Interaction (HCI)** system that enables users to control a computer using **hand gestures**. By integrating an **Arduino microcontroller**, **ultrasonic sensors**, and **Python scripting**, the system translates hand movements into specific computer commands. The goal is to provide a seamless, hands-free alternative to traditional input devices like keyboards and mice.

##  Features
- **Gesture-Based Control**: Perform actions like scrolling, switching tabs, and media control.
- **Arduino & Python Integration**: Real-time communication between hardware and software.
- **Hands-Free Interaction**: Useful for accessibility and intuitive computing.
- **Modular & Expandable**: Can be enhanced with additional gestures and functionalities.

##  Technologies Used
- **Hardware**: Arduino Uno, Ultrasonic Sensors (HC-SR04)
- **Software**:
  - Arduino IDE
  - Python (pySerial, PyAutoGUI)

##  How It Works
1. **Ultrasonic sensors** detect hand positions.
2. The **Arduino board** processes the sensor data.
3. Data is sent via **serial communication** to a **Python script**.
4. Python interprets the gesture and **executes commands** (e.g., scrolling, switching windows).
