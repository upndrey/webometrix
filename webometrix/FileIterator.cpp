#include "FileIterator.h"


FileIterator::FileIterator(FilesGroup* _files) {
	this->files = _files;
}

IFile* FileIterator::next() {
	if (this->hasNext()) 
		this->index++;
	
	return this->files->getFiles().at(index);
}

bool FileIterator::hasNext() {
	vector<IFile*> files = this->files->getFiles();
	
	if (files.size() < this->index + 1)
		return true;
	else
		return false;
}

void FileIterator::remove() {

}