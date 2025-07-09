float volt=0;
void setup() {
  // put your setup code here, to run once:

pinMode(A5,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
volt=(5.0/1023.0) * (analogRead(A5));
Serial.println(volt);
delay(500);
}
