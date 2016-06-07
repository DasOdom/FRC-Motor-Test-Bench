#include <FRCmotor.h>

FRCmotor DriveMotor;

int gamemode = 1;
int potpin = 0;
int val;

void setup()
{
  DriveMotor.SetPort(3);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, -100, 100);
  DriveMotor.Set(val);
  delay(15);

}
