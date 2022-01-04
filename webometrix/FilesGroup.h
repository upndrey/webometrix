#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "..\headers\FileClass.h"
#include "IFile.h"
#include "FileManager.h";

using namespace std;
class FilesGroup : public IFile
{
private:
	vector<IFile*> files;
	string name;
	FileManager* manager;
public:
	FilesGroup(string _name, FileManager*);
	virtual string getFileType();
	virtual void setFileType();
	virtual vector<IFile*> getFiles();
	virtual void addFile(IFile*);
};

