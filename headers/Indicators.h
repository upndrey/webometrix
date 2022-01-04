#pragma once

#include <string>
#include <vector>
#include "../headers/IIndicator.h"
#include "../headers/RichIndicator.h"
#include "../headers/SizeIndicator.h"
#include "../headers/VisibilityIndicator.h"
#include "../headers/ScholarIndicator.h"
#include "../webometrix/IState.h"

using namespace std;

class Indicators {
private:
    vector<IIndicator*> indicators;
	IState* state;
public:
    Indicators();
	virtual void setIndicators();
	virtual vector<IIndicator*> getIndicators();

	virtual void setState(IState*);
	virtual void createIndicator();
	virtual double getIndicatorValue();
};