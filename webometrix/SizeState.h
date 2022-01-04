#pragma once
#include "IState.h"
#include "VisibilityState.h"
#include "../headers/SizeIndicator.h"
class SizeState : public IState
{
private:
	SizeIndicator* indicator;
public:
	void createIndicator();
	double getIndicatorValue(Indicators*);
};

