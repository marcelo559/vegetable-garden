//-------- DEFINIÇÕES DO RELE --------
//Porta ligada ao pino do rele
const int RelayPin = 3;

//-------- DEFINIÇÕES PARA A BOMBA --------
//Define que a variável que guarda o últimos segundos é 0
unsigned long previousMillis = 0; 
const long intervalOff = 3600000;
const long intervalOn = 15000;


void setup(){
  Serial.begin(9600);
  //Define o pino "ReleyPin" como saída
  pinMode(RelayPin, OUTPUT);
  //Estado inicial do rele
  digitalWrite(RelayPin, HIGH);
  Serial.println("Start ...");
}

void loop(){
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= intervalOff){

    previousMillis = currentMillis; //Registra o último milisegundos para ter como referência

    digitalWrite(RelayPin, LOW); //Liga o rele
    Serial.println("Ligado");
    delay(intervalOn); //Intervalo para manter o motor ligado
    digitalWrite(RelayPin, HIGH); //Desliga o rele
    Serial.println("Desligado");
  }

  digitalWrite(RelayPin, HIGH); //Mantem o rele desligado
}
