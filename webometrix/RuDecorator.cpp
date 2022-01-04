#include "RuDecorator.h"
RuDecorator::RuDecorator(IMachine* _machine) {
	machine = _machine;
}


void RuDecorator::setPagesCount(int pages) {

}

void RuDecorator::addPagesCount(int pages) {
}

void RuDecorator::calcRussian(int ruPagesCount) {
	//cout << "call addPagesCount for russian only requests" << endl;
	this->machine->addPagesCount(ruPagesCount);
}


int RuDecorator::getPagesCount() {
	return 0;
}