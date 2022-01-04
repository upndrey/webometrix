#include "..\headers\RichIndicator.h"
#include <vector>

#include <iostream>
using namespace std;

RichIndicator::RichIndicator() {
}

void RichIndicator::update(string event) {
	if (event == "docx") {
		cout << "Rich update for docx type" << endl << endl;
	}
}

void RichIndicator::calcIndicator() {
	//cout << "rich delegator calc rich" << endl;
}


void RichIndicator::setIndicator(double value) {
	//cout << "rich delegator setIndicator" << endl;
	this->value = value;
}

double RichIndicator::getIndicator() {
	return this->value;
}

void RichIndicator::setValuableFiles(vector<FileClass*>) {

}

void RichIndicator::addFileType(FileType*) {

}
