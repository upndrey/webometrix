#pragma once

#include <string>
#include <vector>
#include "../headers/IIndicator.h"
#include "../headers/VisibilityIndicator.h"

using namespace std;

class VIndicatorDelegator: public IIndicator {
private: 
    VisibilityIndicator* indicator;
public:
    VIndicatorDelegator(VisibilityIndicator*);
	virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
