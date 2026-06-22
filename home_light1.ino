#define PIRPIN 5
#define LED 9
void setup()
{
  Serial.begin(115200);
  pinMode(PIRPIN,INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int l=degitalRead(PIRPIN);
  Serial.println("motion detect");
  Serial.println(l);
  if(l==1)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);

  }
  delay(1000);
}