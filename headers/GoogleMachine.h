#pragma once

#include <string>
#include "../headers/IMachine.h"

using namespace std;

class GoogleMachine: public IMachine {
private: 
    int pagesCount;
public:
    GoogleMachine();
	virtual void setPagesCount(int);
	virtual void addPagesCount(int);
	virtual int getPagesCount();
};
