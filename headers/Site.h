#pragma once

#include "../headers/PageClass.h"
#include "../headers/FileClass.h"
#include "../headers/Indicators.h"
#include "../headers/ISite.h"

#include <string>
#include <vector>

using namespace std;

class Site : public ISite {
private:
	string url;
	double rank;
	vector<PageClass*> pages;
	vector<FileClass*> files;
public:
	Site(string);
	
	~Site();

	virtual void setRank();
	virtual double getRank();

	virtual void setUrl(string);
	virtual string getUrl();

	virtual void setPages();
	virtual vector<PageClass*> getPages();

	virtual void setFiles();
	virtual vector<FileClass*> getFiles();
};
