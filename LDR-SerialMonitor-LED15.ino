int sensorPin = A0;    // select the input pin for LDR
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  pinMode(15,OUTPUT);
}

void loop() {
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue > 500)
     digitalWrite(15,LOW);
  else
     digitalWrite(15,HIGH);
  
  delay(1000);
}
