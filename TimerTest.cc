/*
 ============================================================================
 Name        : TestProgram.c
 Author      : Kevin Christopher
 Version     :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <time.h>
#include "TimerTest.h"


void CTimerTest::Wait(double fTime)
{
    struct timespec ts;
    ts.tv_sec = (int)fTime;
    ts.tv_nsec = (fTime-ts.tv_sec)*1000000000;
    nanosleep(&ts, NULL);
}



// inputs file_name1, file_name2
int main (int argc, char *argv[])
{
    CTimerTest RunTumer(0.5);
    int nCount=0;
    while(1)
    {
        printf("count = %d\n",nCount++);
        RunTumer.Wait();
    }
    return 0;
}

