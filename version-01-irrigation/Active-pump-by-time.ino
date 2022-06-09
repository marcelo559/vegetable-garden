//-------- RELAY'S DEFINITIONS --------

const int RelayPin = 3; //Relay's port pin

//-------- DEFINIÇÕES PARA A BOMBA --------

unsigned long previousMillis = 0; //Defines that the variable with 0 seconds
const long intervalOff = 3600000; //Defines the interval that the pump is OFF
const long intervalOn = 15000; //Defines the interval that the pump is ON


void setup(){
  Serial.begin(9600);
  pinMode(RelayPin, OUTPUT); //Defines 'RelayPin' like OUTPUT
  digitalWrite(RelayPin, HIGH); //Defines 'RelayPin' start like OFF
  
  Serial.println("Start ...");
}

void loop(){
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= intervalOff){

    previousMillis = currentMillis;

    digitalWrite(RelayPin, LOW); //Relay turn ON
    Serial.println("On");
    delay(intervalOn); //Pump on range
    digitalWrite(RelayPin, HIGH);  //Relay turn OFF
    Serial.println("Off");
  }

  digitalWrite(RelayPin, HIGH); //Keep the pump off
}
