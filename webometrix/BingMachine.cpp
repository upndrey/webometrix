#include "BingMachine.h"
#include <vector>

#include <iostream>
using namespace std;

BingMachine::BingMachine() {
}

void BingMachine::setPagesCount(int _pagesCount) {
	this->pagesCount = _pagesCount;
}

void BingMachine::addPagesCount(int _pagesCount) {
	this->pagesCount += _pagesCount;
}

int BingMachine::getPagesCount() {
	return 0;
}