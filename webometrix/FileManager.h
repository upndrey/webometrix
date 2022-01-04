#pragma once
#include "IListener.h"
#include <vector>
#include <string>;

using namespace std;

class FileManager
{
private:
	vector<IListener*> listeners;
public:
	void subscribe(IListener*);
	void unsubscribe();
	void notify(string);
};

