#pragma once

#include <string>

using namespace std;

class IMachine {
public:
	virtual void setPagesCount(int) = 0;
	virtual void addPagesCount(int) = 0;
	virtual int getPagesCount() = 0;
};
