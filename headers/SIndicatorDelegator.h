#pragma once

#include <string>
#include <vector>
#include "../headers/IIndicator.h"
#include "../headers/SizeIndicator.h"

using namespace std;

class SIndicatorDelegator: public IIndicator {
private: 
    SizeIndicator* indicator;
public:
    SIndicatorDelegator(SizeIndicator*);
	virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
