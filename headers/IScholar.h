#pragma once

#include <string>

using namespace std;

class IScholar {
public:
	virtual void setDocsCount(int) = 0;
	virtual void calcQuoting(int) = 0;
	virtual int getDocsCount() = 0;
};
