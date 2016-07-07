/* Motion
*/

//define stepper driver pin
const int stepperDrivePin = 11;
//define chariot direction pin
const int chariotDirectionPin = 12;
//define shutter trigger pin
const int shutterTriggerPin = 13;
//define moving Length maximum
const int movingLengthMax = 1000;	//longueur maximum du déplacement à adapter en fonction du slider
//step to mm conversion factor
const int stepTommConvFactor = 5;	//x steps for 1mm

//	Define config variable
int movingLength = movingLengthMax; //longueur du déplacement en mm
unsigned int movingDuration = 0;	//durée du cycle en s max = 65535s soit un peu plus de 18h
int shutterTime = 0;				//temps de pose en 1/10 de s
unsigned int stepsNumber = 2;		//nombre de poses max = 65535 poses
boolean directionMotor = 0;			//Vers le moteur - Depuis le moteur//Motion.ino

void setup() {
	Serial.begin(9600);
	pinMode(stepperDrivePin, OUTPUT);		// set motor pin output
	pinMode(chariotDirectionPin, OUTPUT);	// set direction pin output
	pinMode(shutterTriggerPin, OUTPUT);		// set shutter pin output

	// put config on serial port
		Serial.println("Config");
		Serial.print("Long. Mvt : ");
		Serial.println(movingLength);
		Serial.print("Long. Cycle : ");
		Serial.println(movingDuration);
		Serial.print("Temps de pose : ");
		Serial.println(shutterTime);
		Serial.print("Nb. de pause : ");
		Serial.println(stepsNumber);
		Serial.print("Direction : ");
		Serial.println(directionMotor);
	//

	
}

void loop() {



}
