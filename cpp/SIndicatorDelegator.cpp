#include "..\headers\SIndicatorDelegator.h"
#include <vector>

#include <iostream>
using namespace std;

SIndicatorDelegator::SIndicatorDelegator(SizeIndicator* indicator) {
	this->indicator = indicator;
}


void SIndicatorDelegator::calcIndicator() {

}

void SIndicatorDelegator::setIndicator(double value) {
	cout << "size delegator setIndicator" << endl;
	indicator->setIndicator(value);
}

double SIndicatorDelegator::getIndicator() {
	return indicator->getIndicator();
}