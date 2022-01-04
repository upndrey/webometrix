#include "..\headers\GoogleMachine.h"
#include <vector>

#include <iostream>
using namespace std;

GoogleMachine::GoogleMachine() {
}

void GoogleMachine::setPagesCount(int _pagesCount) {
	this->pagesCount = _pagesCount;
}

void GoogleMachine::addPagesCount(int _pagesCount) {
	this->pagesCount += _pagesCount;
}

int GoogleMachine::getPagesCount() {
	return 0;
}