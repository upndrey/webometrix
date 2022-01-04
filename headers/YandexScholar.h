#pragma once

#include <string>
#include "../headers/IScholar.h"

using namespace std;

class YandexScholar {
private: 
    int docsCount;
public:
    YandexScholar();
	virtual void setDocsCount();
	virtual int getDocsCount();
};
