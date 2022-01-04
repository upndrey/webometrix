#pragma once

#include <string>

using namespace std;

class IIndicator {

public:

	virtual void calcIndicator() = 0;
	virtual void setIndicator(double value) = 0;
	virtual double getIndicator() = 0;
};
