//IR Sensor Code
void setup() 
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT); //LED connected to Pin 13
}
void loop()
{
  int statusSensorir = digitalRead(2); //We have stored the input from ir sensor in this variable. Its 1 if some object is in front, otherwise zero. 00000
  if (statusSensorir==1){
    digitalWrite(13,HIGH); // LED ON
  }
  else{
    digitalWrite(13,LOW); // LED OFF
  }
}
