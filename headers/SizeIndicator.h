#pragma once

#include <string>
#include <vector>
#include "../headers/IMachine.h"
#include "../headers/IIndicator.h"
#include "../webometrix/ILanguage.h"

using namespace std;

class SizeIndicator : public IIndicator {
private: 
    vector<IMachine*> machines;
    int totalPagesCount = 0;
    double value;
public:
    ILanguage* State;
    SizeIndicator();
    virtual void calcIndicator();
	virtual void setIndicator(double value);
    virtual void addMachine(IMachine* _machine);
	virtual double getIndicator();
};
