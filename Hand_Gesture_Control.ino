int trigPin1 = 6; // Trigger
int echoPin1 = 7; // Echo
int trigPin2 = 8; // Trigger
int echoPin2 = 9; // Echo
long duration1, cm1, duration2, cm2;
void setup()
{
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
}
void loop()
{
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin1, INPUT);
  duration1 = pulseIn(echoPin1, HIGH);
  // Convert the time into a distance
  cm1 = (duration1 / 2) / 29.1; // Divide by 29.1 or multiply by 0.0343
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin2, INPUT);
  duration2 = pulseIn(echoPin2, HIGH);
  // Convert the time into a distance
  cm2 = (duration2 / 2) / 29.1; // Divide by 29.1 or multiply by 0.0343
  if (cm1 >= 0 && cm1 <= 10 && cm2 >=0 && cm2 <= 10)
  {
    Serial.println("Volume Down");
    delay(700);
  }
  if (cm1 >= 11 && cm1 <= 21 && cm2 >= 11 && cm2 <= 21)
  {
    Serial.println("Volume Up");
    delay(700);
  }
  if (cm1 >= 20 && cm1 <= 25)
  {
    Serial.println("Rewind");
    delay(700);
  }
  if (cm1 >= 40 && cm1 <= 45)
  {
    Serial.println("Forward");
    delay(700);
  } 
  if (cm2 > 28 && cm2 <= 35)
  {
    Serial.println("Play/Pause");
    delay(700);
  }
}
