#include "..\headers\ScholarIndicator.h"
#include <vector>

#include <iostream>
using namespace std;

ScholarIndicator::ScholarIndicator() {
}

void ScholarIndicator::update(string event) {
	if(event == "txt" || event == "fb2" || event == "docx")
		cout << "Scholar update for " << event << " type" << endl << endl;
}


void ScholarIndicator::calcIndicator() {
	//cout << "rich delegator calc scholar" << endl;
}

void ScholarIndicator::setIndicator(double value) {
	//cout << "scholar delegator setIndicator" << endl;
	this->value = value;
}

void ScholarIndicator::addScholar(IScholar* _scholar) {
	this->scholars.push_back(_scholar);
}

double ScholarIndicator::getIndicator() {
	return this->value;
}