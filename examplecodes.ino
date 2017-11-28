char incomingByte;
char test;

void setup(){
	Serial.begin(9600);
}

void loop(){
	test='r';
	
	// send data only when you receive data:
	while(1){
	incomingByte = Serial.read();
	delay(50);
	break;
	}

	if(incomingByte == test){
	Serial.println("pH is");
	}
}