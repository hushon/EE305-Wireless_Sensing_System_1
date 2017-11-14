/*
  http://www.arduino.cc/en/Tutorial/Blink
*/

int led = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
	// analogWrite(led,0);
	// analogWrite(led,63);
	// analogWrite(led,127);
	// analogWrite(led,191);
	analogWrite(led,255);
}