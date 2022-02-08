void setup() {
  // put your setup code here, to run once:
pinMode(0,OUTPUT);        // Red
pinMode(4,OUTPUT);       // Common Cathode -LOW for OFF & HIGH for ON
pinMode(5,OUTPUT);       // Green
pinMode(16,OUTPUT);      // Blue
digitalWrite(4,LOW);   // Common Cathode RGB LED
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(0,LOW);
digitalWrite(5,LOW);
digitalWrite(16,LOW);
delay(1000);
digitalWrite(0,HIGH);
digitalWrite(5,LOW);
digitalWrite(16,LOW);
delay(1000);
digitalWrite(0,LOW);
digitalWrite(5,HIGH);
digitalWrite(16,LOW);
delay(1000);
digitalWrite(0,HIGH);
digitalWrite(5,HIGH);
digitalWrite(16,LOW);
delay(1000);
digitalWrite(0,LOW);
digitalWrite(5,LOW);
digitalWrite(16,HIGH);
delay(1000);
digitalWrite(0,HIGH);
digitalWrite(5,LOW);
digitalWrite(16,HIGH);
delay(1000);
digitalWrite(0,LOW);
digitalWrite(5,HIGH);
digitalWrite(16,HIGH);
delay(1000);
digitalWrite(0,HIGH);
digitalWrite(5,HIGH);
digitalWrite(16,HIGH);
delay(1000);
}
