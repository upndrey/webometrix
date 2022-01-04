#include "..\headers\FileClass.h"
#include <vector>

#include <iostream>
using namespace std;

FileClass::FileClass(string _name, string _type) {
	this->name = _name;
	this->type = _type;
}

string FileClass::getFileType() {
	//cout << "call getFileType in single file" << endl;
	return this->type;
}

void FileClass::setFileType() {
}

FileClass* FileClass::clone() {
	return this;
}

