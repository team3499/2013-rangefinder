#define Range1a 2
#define Range1b 3
#define Range2a 5
#define Range2b 6
#define Range3a 8
#define Range3b 9
#define Range4a 11
#define Range4b 12
void setup() {
  pinMode(Range1a, INPUT);
  pinMode(Range1b, OUTPUT);
  
  pinMode(Range2a, INPUT);
  pinMode(Range2b, OUTPUT);
  
  pinMode(Range3a, INPUT);
  pinMode(Range3b, OUTPUT);
  
  pinMode(Range4a, INPUT);
  pinMode(Range4b, OUTPUT);
  
  delay(250);
  
   digitalWrite(Range1b, LOW);
   digitalWrite(Range2b, LOW);
   digitalWrite(Range3b, LOW);
   digitalWrite(Range4b, LOW);
  
  Serial.begin(9600);
}
  
void loop() {
  delay(1000);
  digitalWrite(Range1b, HIGH);
  long pulse = pulseIn(Range1a, HIGH);
  digitalWrite(Range1b, LOW);
  long inches = pulse/127;
  
  Serial.println(inches);
  
  digitalWrite(Range2b, HIGH);
  pulseIn(Range2a, HIGH);
  digitalWrite(Range2b, LOW);
  inches = pulse/147;
  
  Serial.println(inches);
  
  digitalWrite(Range3b, HIGH);
  pulseIn(Range3a, HIGH);
  digitalWrite(Range3b, LOW);
  inches = pulse/147;
  
  Serial.println(inches);
  
  digitalWrite(Range4b, HIGH);
  pulseIn(Range4a, HIGH);
  digitalWrite(Range4b, LOW);
  inches = pulse/147;
  
  Serial.println(inches);
  
}
