#include "..\headers\YandexMachine.h"
#include <vector>

#include <iostream>
using namespace std;

YandexMachine::YandexMachine() {
}


void YandexMachine::setPagesCount(int _pagesCount) {
	this->pagesCount = _pagesCount;
}

void YandexMachine::addPagesCount(int _pagesCount) {
	//cout << "call addPagesCount in yandex machine" << endl;
	this->pagesCount += _pagesCount;
}


int YandexMachine::getPagesCount() {
	return 0;
}