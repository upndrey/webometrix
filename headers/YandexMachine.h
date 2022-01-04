#pragma once

#include <string>
#include "../headers/IMachine.h"

using namespace std;

class YandexMachine: public IMachine {
private: 
    int pagesCount;
public:
    YandexMachine();
	virtual void setPagesCount(int);
	virtual void addPagesCount(int);
	virtual int getPagesCount();
};
