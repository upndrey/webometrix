#pragma once
#include <string>

using namespace std;

class IListener
{
public:
	virtual void update(string) = 0;
};

