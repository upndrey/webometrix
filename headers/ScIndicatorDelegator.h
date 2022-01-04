#pragma once

#include <string>
#include <vector>
#include "../headers/ScholarIndicator.h"
#include "../headers/IIndicator.h"

using namespace std;

class ScIndicatorDelegator: public IIndicator {
private: 
    ScholarIndicator* indicator;
public:
    ScIndicatorDelegator(ScholarIndicator*);
	virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
