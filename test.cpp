#include <wiringpi.h>

#define LED 25
int main()
{
    wiringPiSetup();
    pinMode(LED, OUTPUT);
    while (true)
    {
        digitalWrite(LED, HIGH);
        sleep(1);
        digitalWrite(LED, LOW);
    }
}
