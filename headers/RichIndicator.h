#pragma once

#include <string>
#include <vector>
#include "../headers/FileType.h"
#include "../headers/FileClass.h"
#include "../headers/Site.h"
#include "../headers/IIndicator.h"
#include "../webometrix/IListener.h"

using namespace std;

class RichIndicator : public IIndicator, public IListener {
private: 
    int linksCount;
    vector<FileClass*> valuableFiles;
    vector<FileType*> fileTypes;
    double value;
public:
    RichIndicator();
    virtual void update(string);
    virtual void setValuableFiles(vector<FileClass*>);
    virtual void addFileType(FileType*);
    virtual void calcIndicator();
	virtual void setIndicator(double value);
	virtual double getIndicator();
};
