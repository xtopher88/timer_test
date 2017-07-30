/*
 * TimerTest.h
 *
 *  Created on: May 20, 2017
 *      Author: kchristopher
 */

#ifndef TIMERTEST_H_
#define TIMERTEST_H_


class CTimerTest
{
public:
    CTimerTest(double fTime = 1.0){m_fTime = fTime;}
    void Wait(){ Wait(m_fTime); };
    void Wait(double fTime);
protected:
    double m_fTime;
};


#endif
