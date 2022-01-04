#pragma once
#include "ILanguage.h"

class EngMachine: public ILanguage
{
public:
	IMachine* createMachine(string type);
};

