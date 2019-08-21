const int irr = 2;
const int irl = 3;
const int f1 = 4;
const int f2 = 5;
const int b1 = 6;
const int b2 = 7;
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;  

void setup() {
//Ir sensors  
  pinMode(irr, INPUT);
  pinMode(irl, INPUT);
//Ultrasound
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
//Motors
  pinMode(f1, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {
  digitalWrite(f1, HIGH);
  digitalWrite(f2, HIGH);
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
//  if (distance<6)
//  {
//     digitalWrite(6, HIGH);
//    digitalWrite(7, HIGH);
//   
//    delay(590);
//    digitalWrite(6, LOW);
//    digitalWrite(7, LOW);
//  }
//  // Prints the distance on the Serial Monitor
//  Serial.print("Distance: ");
//  Serial.println(distance);
}
