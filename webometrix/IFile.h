#pragma once
#include <string>

using namespace std;
class IFile
{
public:
	virtual string getFileType() = 0;
	virtual void setFileType() = 0;
};

