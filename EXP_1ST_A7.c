int ADC_Pin = A0;	// ADC pin

void setup(){
	// declare the ADCPin as an OUTPUT:
	pinMode(ADC_Pin, INPUT);
	// serial communication start
	Serial.begin(9600);
}

void loop(){

	/* average (200 sanples) */

	//average
	float buf[200];
	float sumCode=0;
	float avgCode=0;
	float ADC0_Voltage=0;

	for(int i=0;i<200;i++){

		// read the value from the ADC_Pin:
		buf[i]=analogRead(ADC_Pin);
		delay(5);

	}

	for(int i=0;i<200,i++){

		//summation
		sumCode+=buf[i];

	}

	avgCode=sumCode/200;

	//Averaged code to voltage conversion
	ADC0_Voltage = 4.703*avgCode/1023+0.013;
	Serial.print("ADC0 voltage: ");Serial.print(ADC0_Voltage, 3);Serial.println(" V");

	//delay(100);
	
}