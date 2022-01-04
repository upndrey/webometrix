#include "..\headers\SizeIndicator.h"
#include <vector>

#include <iostream>
using namespace std;

SizeIndicator::SizeIndicator() {
}

void SizeIndicator::calcIndicator() {
	//cout << "rich delegator calc size" << endl;
}


void SizeIndicator::setIndicator(double value) {
	//cout << "size delegator setIndicator" << endl;
	this->value = value;
}

void SizeIndicator::addMachine(IMachine* _machine) {
	this->machines.push_back(_machine);
}

double SizeIndicator::getIndicator() {
	return this->value;
}