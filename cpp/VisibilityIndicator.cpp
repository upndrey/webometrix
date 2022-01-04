#include "..\headers\VisibilityIndicator.h"
#include <vector>

#include <iostream>
using namespace std;

VisibilityIndicator::VisibilityIndicator() {
}

void VisibilityIndicator::calcIndicator() {
	//cout << "rich delegator calc visibility" << endl;
}


void VisibilityIndicator::setIndicator(double value) {
	//cout << "visibility delegator setIndicator" << endl;
	this->value = value;
}

double VisibilityIndicator::getIndicator() {
	return this->value;
}