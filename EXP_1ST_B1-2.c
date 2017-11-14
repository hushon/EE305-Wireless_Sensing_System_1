int led = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
	analogWrite(led,31);
	// analogWrite(led,63);
	//analogWrite(led,95);
	// analogWrite(led,127);
	//analogWrite(led,159);
	// analogWrite(led,191);
	//analogWrite(led,223);
	// analogWrite(led,255);
}