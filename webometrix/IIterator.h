#pragma once
#include "..\headers\FileClass.h"
class IIterator
{
public:
	virtual IFile* next() = 0;
	virtual bool hasNext() = 0;
	virtual void remove() = 0;
};

