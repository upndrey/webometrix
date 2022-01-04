#pragma once

#include <string>
#include "../headers/IScholar.h"

using namespace std;

class GoogleScholar: public IScholar {
private: 
    int docsCount;
	int quotingCount;
public:
    GoogleScholar();
	virtual void setDocsCount(int);
	virtual void calcQuoting(int);
	virtual int getDocsCount();
};
