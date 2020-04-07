int ledPin = 13;
int outpin = 6;
volatile byte rpmcount;
unsigned int rpm;
unsigned long timeold;
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
void rpm_fun()
{
rpmcount++;
}
void setup()
{
lcd.begin(16, 2);
attachInterrupt(0, rpm_fun, FALLING);
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
pinMode(outpin, OUTPUT);
digitalWrite(outpin, HIGH);
rpmcount = 0;
rpm = 0;
timeold = 0;
}
void loop()
{
delay(1000);
detachInterrupt(0);
rpm = 60*1000/(millis() - timeold)*rpmcount;
timeold = millis();
rpmcount = 0;
lcd.clear();
lcd.print("RPM=");
lcd.print(rpm);
if(rpm > 1000)
digitalWrite (outpin, LOW);
else
digitalWrite (outpin, HIGH);
attachInterrupt(0, rpm_fun, FALLING);
}
