#include "..\headers\VIndicatorDelegator.h"
#include <vector>

#include <iostream>
using namespace std;

VIndicatorDelegator::VIndicatorDelegator(VisibilityIndicator* indicator) {
	this->indicator = indicator;
}


void VIndicatorDelegator::calcIndicator() {

}


void VIndicatorDelegator::setIndicator(double value) {
	cout << "visibility delegator setIndicator" << endl;
	indicator->setIndicator(value);
}


double VIndicatorDelegator::getIndicator() {
	return indicator->getIndicator();
}