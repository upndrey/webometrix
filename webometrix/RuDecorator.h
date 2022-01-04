#pragma once
#include <iostream>
#include "../headers/IMachine.h"
class RuDecorator: public IMachine 
{
private:
	IMachine* machine;
public:
	RuDecorator(IMachine*);
	virtual void setPagesCount(int);
	virtual void addPagesCount(int);
	virtual int getPagesCount();
	virtual void calcRussian(int);
};

