
const int analogInPin = A0;  // Analog input pin that the lm35 sensor is attached to
const int buttonPin = 13; // the button pin
//variable to indicate the wether we are transmitting over serial port or not
bool transmittingState = false;
//variable to indicate the current and last  Button state
bool CurrentButtonState;
bool lastButtonState;

const int samplingTime = 500; // this variable represent the sampling time in ms
unsigned long currentTime; // this varialble to hold current time  
unsigned long lastTime;    // this variable to hold last time since last sending operation
int sensorValue = 0;        // value read from the analog pin connected to lm35
const int BaudRate = 9600; // this variable to hold bitRate of serial port


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(BaudRate);
  pinMode(buttonPin, INPUT);
  lastTime = millis();
  lastButtonState = digitalRead(buttonPin) ;
}

void loop() {
	/*
	1- read the current ButtonState using digitalRead function
  
	2- check if the lastButtonState is LOW and currentButtonState is HIGH this means that the button is pressed once.
	3- and if that is true toggle the transmittingState
	4- after that always let lastButtonState equals currentButtonState
	
	5- read the currentTime  using millis() function
  
	*** transmit data only every samplingTime and if transmittingState is true as following:
	6- check if the difference between currentTime and lastTime is >= samplingTime 
	and if  that true it means that a samplingTime has been elapsed (انقضى)
    7- check if the reansmittingState is true and 
	8- if the last two coditions are true  then read the current temperature and send it to matlab and let lastTime == currentTime
    *** the code to get the temperature as following:
    sensorValue = analogRead(analogInPin);
	get the analog voltge in m volt
    float analogVlotage = ( sensorValue / 1023.0) * 5000;
    the temperature sensor produces  0mV if the temperature is 2 C and for every 1 C it produces 10mV  
	0 mV + 10.0 mV/°C range from 2 to 150  degree celsius
    float temperature = 2 + analogVlotage / 10 ;
  */
}
