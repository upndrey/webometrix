#include "../headers/Indicators.h"
#include <vector>

#include <iostream>
using namespace std;

Indicators::Indicators() {
};

void Indicators::setIndicators() {
}

void Indicators::setState(IState* _state) {
	this->state = _state;
}

void Indicators::createIndicator() {
	this->state->createIndicator();
}

double Indicators::getIndicatorValue() {
	return this->state->getIndicatorValue(this);
}

vector<IIndicator*> Indicators::getIndicators() {
	vector<IIndicator*> indicators;
	return indicators;
}
