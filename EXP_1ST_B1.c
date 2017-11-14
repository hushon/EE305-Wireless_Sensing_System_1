int ADC_Pin = A0;	// ADC pin

void setup(){
	// declare the ADCPin as an OUTPUT:
	pinMode(ADC_Pin, INPUT);
	// serial communication start
	Serial.begin(9600);
}

void loop(){

	float ADC0_Code = 0;
	float ADC0_Voltage = 0;

	// read the ADC_Pin data:
	ADC0_Code = analogRead(ADC_Pin);
	// Print the ADC code
	Serial.print("ADC0 code: "):
	Serial.println(ADC0_Code, 0);

	delay(1000);
}