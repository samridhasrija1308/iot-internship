#include <Servo.h>
#define Servopin 6
#define IRPIN 5
Servo S;
void setup()
{
  Serial.begin(115200);
  S.attach (Servopin);
  pinMode(IRPIN,INPUT);
}
  void loop()
{
int i=digitalRead(IRPIN); 
Serial.println("Motion detect");
if(i==0)
{ 
S.write(90);
 }
 else
 {
  S.write(0);
 }
 delay (1000);
}