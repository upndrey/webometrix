#include "FilesGroup.h"

FilesGroup::FilesGroup(string _name, FileManager* _manager) {
	this->name = _name;
	this->manager = _manager;
}

vector<IFile*> FilesGroup::getFiles() {
	return this->files;
}

void FilesGroup::addFile(IFile* file) {
	this->files.push_back(file);
	this->manager->notify(file->getFileType());
}

string FilesGroup::getFileType() {
	cout << "call getFileType in group files" << endl;
	string types;
	for (IFile* file : this->files)
		types += file->getFileType() + " ";
	return types;
}

void FilesGroup::setFileType() {
}
