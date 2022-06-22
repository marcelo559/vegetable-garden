//version 02.01.00
//This version I isolated the Arduino Uno board, we don't connect the wifi or database

int sensorValue;
int sensorNumber = 2;
int sensorPin[] = {A0, A1, A2, A3, A4};

void setup(){
  for (int i=0; i < sensorNumber; i++) {
    pinMode(sensorPin[i], INPUT);
  }
  Serial.begin(9600);
}

void loop(){
  
  for (int i=0; i < sensorNumber; i++) {
    sensorValue = analogRead(sensorPin[i]);
    Serial.print("Analog Value_");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(sensorValue);
  }
  Serial.println("-----------------------------------------------------");
  delay(10000);
}
