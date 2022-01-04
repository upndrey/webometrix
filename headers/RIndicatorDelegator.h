#pragma once

#include <string>
#include <vector>
#include "../headers/IIndicator.h"
#include "../headers/RichIndicator.h"

using namespace std;

class RIndicatorDelegator: public IIndicator {
private: 
    RichIndicator* indicator;
public:
    RIndicatorDelegator(RichIndicator*);
	virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
