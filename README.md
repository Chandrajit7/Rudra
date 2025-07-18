# Rudra
A driver Sleep detection and alarm system ( Eye blink sensor , Arduino Nano , Buzzer)

👁️ Eye Blink Detection System with Buzzer Alert using Arduino
This project detects eye closure using an Eye Blink Sensor and triggers a buzzer alarm if the eye remains closed continuously for 3 seconds or more. It's particularly useful in applications like drowsiness detection in drivers.

🔧 Components Used
Arduino Nano / Arduino Uno

Eye Blink Sensor (e.g., IR-based or QRD1114)

Buzzer

Power Supply (Battery or USB)

Connecting Wires

Breadboard (optional)

🔌 Circuit Connections
Module	Pin on Module	Connects To Arduino Pin	Description
Eye Blink Sensor	VCC	+5V	Power Supply
GND	GND	Ground
OUT	A1	Analog Input
Buzzer	+	D8	Digital Output
-	GND	Ground

Refer to the included circuit diagram for detailed wiring.

🧠 Working Principle
The Eye Blink Sensor continuously monitors whether the eye is open or closed.

If the sensor detects the eye is closed for more than 3 seconds, it activates the buzzer.

Once the eye opens, the buzzer is turned off immediately.

📜 Arduino Code Summary
Reads analog input from the eye blink sensor.

Uses a timer to measure how long the eye remains closed.

Triggers the buzzer if the duration exceeds 3 seconds.

Includes Serial Monitor output for real-time sensor value debugging.

📂 Files Included
eye_blink_buzzer.ino – Arduino sketch

README.md – This file

Circuit Diagram – PNG/JPG of wiring connections

🛠️ How to Use
Connect the components as per the circuit diagram.

Upload the code to your Arduino using the Arduino IDE.

Open Serial Monitor (9600 baud) to observe sensor values.

Test by closing your eye or placing an object in front of the sensor.

If eye closure persists for over 3 seconds, the buzzer will sound.

🔍 Calibration Tips
Monitor analog values using Serial Monitor.

Adjust this line in code if needed:

cpp
Copy
Edit
bool eyeClosed = (sensorValue < 300); // Adjust threshold
📸 Preview

👨‍💻 Author
Chandrajit Banerjee
Email: chandrajitbanerjee11@gmail.com
Phone: 6289317043 / 9163306289

