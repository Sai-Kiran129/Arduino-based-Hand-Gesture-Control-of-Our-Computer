// Define the pins for the first ultrasonic sensor
const int trigPin1 = 10;
const int echoPin1 = 11;

// Define the pins for the second ultrasonic sensor
const int trigPin2 = 3;
const int echoPin2 = 4;

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Set the trigPin as an output
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);

  // Set the echoPin as an input
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
}

void loop() {
  // Measure distance for sensor 1
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 * 0.0343) / 2;

  // Measure distance for sensor 2
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2 * 0.0343) / 2;

  // Print the distances
  Serial.print("Distance Sensor 1: ");
  Serial.print(distance1);
  Serial.println(" cm");

  Serial.print("Distance Sensor 2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // Check distance ranges and perform actions
  if (distance1 >= 0 && distance1 <= 10 && distance2 >= 0 && distance2 <= 10) {
    Serial.println("Switch");
  } else if (distance1 >= 10 && distance1 <= 30 && distance2 >= 10 && distance2 <= 30) {
    Serial.println("Stop");
  } else {
    if (distance1 >= 10 && distance1 <= 30) {
      Serial.println("Move Up");
    } else if (distance1 < 10) {
      Serial.println("Next");
    }

    if (distance2 >= 10 && distance2 <= 30) {
      Serial.println("Move Down");
    } else if (distance2 < 10) {
      Serial.println("Previous");
    }
  }

  // Delay before next measurement
  delay(1000);
}
