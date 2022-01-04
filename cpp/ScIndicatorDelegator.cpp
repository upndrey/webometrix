#include "..\headers\ScIndicatorDelegator.h"
#include <vector>

#include <iostream>
using namespace std;

ScIndicatorDelegator::ScIndicatorDelegator(ScholarIndicator* indicator) {
	this->indicator = indicator;
}

void ScIndicatorDelegator::setIndicator(double value) {
	cout << "scholar delegator setIndicator" << endl;
	indicator->setIndicator(value);
}

double ScIndicatorDelegator::getIndicator() {
	return this->getIndicator();
}