// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN (pin 13) as an output.
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(5, 255);
  Serial.println(255);
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}
