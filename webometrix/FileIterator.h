#pragma 
#include "FilesGroup.h"
#include "IIterator.h"
#include "../headers/FileClass.h"
#include <vector>

class FileIterator: public IIterator
{
private:
	FilesGroup* files;
	int index = 0;
public:
	FileIterator(FilesGroup* _files);
	virtual IFile* next();
	virtual bool hasNext();
	virtual void remove();
};

