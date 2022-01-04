#pragma once

#include <string>

using namespace std;

class FileType {
private: 
    string type;
public:
    FileType();
	virtual void setType();
	virtual string getType();
};
