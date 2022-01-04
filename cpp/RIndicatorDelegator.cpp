#include "..\headers\RIndicatorDelegator.h"
#include <vector>

#include <iostream>
using namespace std;

RIndicatorDelegator::RIndicatorDelegator(RichIndicator* indicator) {
	this->indicator = indicator;
}


void RIndicatorDelegator::calcIndicator() {

}

void RIndicatorDelegator::setIndicator(double value) {
	cout << "rich delegator setIndicator" << endl;
	indicator->setIndicator(value);
}

double RIndicatorDelegator::getIndicator() {
	return indicator->getIndicator();
}