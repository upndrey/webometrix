#pragma once

#include <string>
#include <vector>
#include "../headers/IScholar.h"
#include "../headers/IIndicator.h"
#include "../webometrix/IListener.h"

using namespace std;

class ScholarIndicator: public IIndicator, public IListener {
private: 
    vector<IScholar*> scholars;
    int totalDocsCount;
    double value;
public:
    ScholarIndicator();
    virtual void update(string);
    virtual void calcIndicator();
	virtual void setIndicator(double value);
    virtual void addScholar(IScholar* _scholar);
    virtual double getIndicator();
};
