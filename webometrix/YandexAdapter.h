#pragma once
#include "../headers/IScholar.h"
#include "../headers/YandexScholar.h"

class YandexAdapter: public IScholar
{
private:
	int docsCount;
	YandexScholar* yandex;
public:
	YandexAdapter(YandexScholar*);
	virtual void setDocsCount(int);
	virtual void calcQuoting(int);
	virtual int getDocsCount();
};

