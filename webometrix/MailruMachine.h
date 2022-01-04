#pragma once

#include <string>
#include "../headers/IMachine.h"

using namespace std;

class MailruMachine : public IMachine {
private:
	int pagesCount;
public:
	MailruMachine();
	virtual void setPagesCount(int);
	virtual void addPagesCount(int);
	virtual int getPagesCount();
};
