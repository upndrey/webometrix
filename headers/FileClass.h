#pragma once

#include <string>
#include "../webometrix/IFile.h"

using namespace std;

class FileClass : public IFile {
private:
	string name;
	string type;

public:
	FileClass(string _name, string _type);

	virtual string getFileType();

	virtual void setFileType();
	virtual FileClass* clone();
};
