#pragma once
#include "IState.h"
#include "ScholarState.h"
#include "../headers/RichIndicator.h"
class Indicators;

class RichState : public IState
{
private:
	RichIndicator* indicator;
public:
	void createIndicator();
	double getIndicatorValue(Indicators*);
};

