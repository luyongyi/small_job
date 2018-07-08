#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <cstdio>
using namespace std;

int main()
{
    struct timeval tv, ts;
    gettimeofday(&tv, NULL);
    sleep(3);
    gettimeofday(&ts, NULL);
    cout << "second" << tv.tv_sec - ts.tv_sec << endl;
    cout << "milsec:" << tv.tv_sec * 1000 + tv.tv_usec / 1000 - ts.tv_sec * 1000 - ts.tv_usec / 1000 << endl;
    printf("millisecond:%ld\n",tv.tv_sec*1000 + tv.tv_usec/1000-ts.tv_sec*1000-ts.tv_usec/1000);
    }
