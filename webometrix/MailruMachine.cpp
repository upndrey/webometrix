#include "MailruMachine.h"
#include <vector>

#include <iostream>
using namespace std;

MailruMachine::MailruMachine() {
}


void MailruMachine::setPagesCount(int _pagesCount) {
	this->pagesCount = _pagesCount;
}

void MailruMachine::addPagesCount(int _pagesCount) {
	//cout << "call addPagesCount in mailru machine" << endl;
	this->pagesCount += _pagesCount;
}


int MailruMachine::getPagesCount() {
	return 0;
}