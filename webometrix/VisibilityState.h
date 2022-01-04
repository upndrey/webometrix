#pragma once
#include "IState.h"
#include "../headers/VisibilityIndicator.h"
class VisibilityState : public IState
{
private:
	VisibilityIndicator* indicator;
public:
	void createIndicator();
	double getIndicatorValue(Indicators*);
};

