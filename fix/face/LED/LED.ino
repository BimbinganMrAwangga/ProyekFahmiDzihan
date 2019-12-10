void setup()
{
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.read() == 'Y')
  {
    digitalWrite(13,HIGH);  
  } 

  if(Serial.read() == 'N')
  { 
    digitalWrite(13,LOW); 
  }  
}
