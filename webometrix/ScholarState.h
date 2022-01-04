#pragma once
#include "IState.h"
#include "SizeState.h"
#include "../headers/ScholarIndicator.h"

class ScholarState : public IState
{
private:
	ScholarIndicator* indicator;
public:
	void createIndicator();
	double getIndicatorValue(Indicators*);
};

