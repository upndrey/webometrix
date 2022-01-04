#pragma once
#include "../headers/IMachine.h"
class BingMachine : public IMachine
{
private:
	int pagesCount;
public:
	BingMachine();
	virtual void setPagesCount(int);
	virtual void addPagesCount(int);
	virtual int getPagesCount();
};

