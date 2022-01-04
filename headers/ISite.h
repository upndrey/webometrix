#pragma once

#include "../headers/PageClass.h"
#include "../headers/FileClass.h"
#include "../headers/Indicators.h"
#include <string>
#include <vector>


//Интерфейс сайта (для класса-прокси)
class ISite {
public:
	virtual void setRank() = 0;
	virtual double getRank() = 0;

	virtual void setUrl(string) = 0;
	virtual string getUrl() = 0;

	virtual void setPages() = 0;
	virtual vector<PageClass*> getPages() = 0;

	virtual void setFiles() = 0;
	virtual vector<FileClass*> getFiles() = 0;
};
