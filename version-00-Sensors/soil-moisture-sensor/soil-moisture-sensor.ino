//This article was developed about program "Monitoracao de planta usando Arduino" by author FILIPE FLOP
//Web site link: https://www.filipeflop.com/blog/monitore-sua-planta-usando-arduino/
 
#define analog_signal_pin A0

int analog_value;
 
void setup()
{
  Serial.begin(9600);
  pinMode(analog_signal_pin, INPUT);
}
 
void loop()
{
  //Read the value from sensor pin A0
  analog_value = analogRead(analog_signal_pin);
 
  //Shows analog port value on serial monitor for manual recording
  Serial.print("Analog Port: ");
  Serial.print(analog_value);
 
  if (analog_value > 0 && analog_value < 400)
  {
    Serial.println(" Status: Wet soil");
  }
  else if (analog_value > 400 && analog_value < 800)
  {
    Serial.println(" Status: Moderate humidity");
  }
  else if (analog_value > 800 && analog_value < 1024)
  {
    Serial.println(" Status: Dry soil");
  }
  else
  {
    Serial.println(" Status: Fail");
  }
  //wait one minute to run again
  delay(100000);
}
