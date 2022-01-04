#pragma once

#include <string>
#include <vector>
#include "../headers/IScholar.h"
#include "../headers/IIndicator.h"

using namespace std;

class VisibilityIndicator : public IIndicator {
private: 
    int linksCount;
    double value;
public:
    VisibilityIndicator();
	virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
