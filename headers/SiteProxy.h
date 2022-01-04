#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>

#include "../headers/PageClass.h"
#include "../headers/FileClass.h"
#include "../headers/Indicators.h"
#include "../headers/ISite.h"
#include "../headers/Site.h"
#include "../webometrix/Snapshot.h"

using namespace std;

class SiteProxy : public ISite {
private:
    Site* site;

    double scholarParam;
    double sizeParam;
    double visibilityParam;
    double richParam;

public:
	SiteProxy(string url, double scholar, double size, double visibility, double rich);
	
	~SiteProxy();

	virtual void setParams(double, double, double, double);
	virtual void printParams();
	virtual void setSite(Site*);
	Snapshot* createSnaphot();

	virtual void setRank();
	virtual double getRank();

	virtual void setUrl(string);
	virtual string getUrl();

	virtual void setPages();
	virtual vector<PageClass*> getPages();

	virtual void setFiles();
	virtual vector<FileClass*> getFiles();
};
