#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <cstdio>
#include <wiringPi.h>

using namespace std;

const unsigned int gpio_point = 0;

int main()
{
start:
    int recall = 0;

    wiringPiSetup();
    pinMode(gpio_point, OUTPUT);
    digitalWrite(gpio_point, HIGH);
    usleep(80);

    digitalWrite(gpio_point, LOW);
    usleep(20);
    digitalWrite(gpio_point, HIGH);

    pinMode(gpio_point, INPUT);

    while (!digitalRead(gpio_point))
    {
        recall++;
        usleep(10);
    }
    if (recall < 6)
    {
        recall = 0;
        sleep(3);
        goto start;
    }
    recall = 1;

    while (digitalRead(gpio_point))
    {
        recall++;
        usleep(10);
    }
    if (recall < 6)
    {
        recall = 0;
        sleep(3);
        goto start;
    }
    cout << "recall success" << endl;
    sleep(3);
    goto start;
    
    for (int i = 0; i < 40; i++)
    {
    }
}
