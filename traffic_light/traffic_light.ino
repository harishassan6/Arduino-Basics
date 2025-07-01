void setup() {
  // Set pin 4 as OUTPUT for Green LED
  pinMode(4, OUTPUT);

  // Set pin 5 as OUTPUT for Yellow LED
  pinMode(5, OUTPUT);

  // Set pin 6 as OUTPUT for Red LED
  pinMode(6, OUTPUT);
}

void loop() {
  
  // GREEN LIGHT ON
  
  digitalWrite(4, HIGH);   // Turn on Green LED
  delay(5000);             // Wait for 5 seconds
  digitalWrite(4, LOW);    // Turn off Green LED

 
  // YELLOW LIGHT ON

  digitalWrite(5, HIGH);   // Turn on Yellow LED
  delay(1000);             // Wait for 1 second
  digitalWrite(5, LOW);    // Turn off Yellow LED


  // RED LIGHT ON
 
  digitalWrite(6, HIGH);   // Turn on Red LED
  delay(5000);             // Wait for 5 seconds
  digitalWrite(6, LOW);    // Turn off Red LED

 
}
