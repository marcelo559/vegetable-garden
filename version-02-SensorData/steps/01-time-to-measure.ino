//--- DEFINITIONS ABOUT THE PERIOD ---

unsigned long previousMillis = 0; //Define that the variable is 0 seconds
const long intervalOff = 6000; //Define the interval of period

void setup() {
  Serial.begin(9600);
  Serial.println("Start ...");
}

void loop() {
  delay(1500);
  
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= intervalOff){

    previousMillis = currentMillis;

    Serial.println("Start measurement"); //call the measure function outside the LOOP
    //call function and return if SUCESS or NOT
    Serial.println("End measurement");
  }

  Serial.println(currentMillis);
}
