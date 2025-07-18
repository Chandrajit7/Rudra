// Pin definitions
const int eyeSensorPin = A1; // Analog input from Eye Blink Sensor
const int buzzerPin = 8;     // Output to Buzzer

// Timing
const unsigned long eyeClosedThreshold = 3000; // 3 seconds
unsigned long eyeClosedStart = 0;
bool eyePreviouslyClosed = false;

void setup() {
  pinMode(eyeSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW); // Ensure buzzer is off initially

  Serial.begin(9600); // For debugging
}

void loop() {
  int sensorValue = analogRead(eyeSensorPin); // Read sensor value

  // Debugging
  Serial.println(sensorValue);

  // Adjust this threshold based on your sensor’s readings for "eye closed"
  bool eyeClosed = (sensorValue < 300);  // You may need to calibrate this

  if (eyeClosed) {
    if (!eyePreviouslyClosed) {
      eyeClosedStart = millis(); // Record time when eye first closed
      eyePreviouslyClosed = true;
    }

    // If eye has been closed for more than threshold
    if (millis() - eyeClosedStart >= eyeClosedThreshold) {
      digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    }
  } else {
    // Eye opened; reset everything
    digitalWrite(buzzerPin, LOW);
    eyePreviouslyClosed = false;
  }

  delay(100); // Small delay to reduce noise
}
