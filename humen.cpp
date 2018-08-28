#include <wiringPi.h>
#include <iostream>
using namespace std;

int main()
{
    wiringPiSetup();
    
    pinMode(1, INPUT);

    while (1)
    {
        int i = 0;
        cout << digitalRead(1) << endl;
    }
}
