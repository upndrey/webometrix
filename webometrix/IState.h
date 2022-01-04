#pragma once
#ifndef __ISTATE_H_
#define __ISTATE_H_
class Indicators;

class IState
{
public:
	virtual void createIndicator() = 0;
	virtual double getIndicatorValue(Indicators*) = 0;
};

#endif