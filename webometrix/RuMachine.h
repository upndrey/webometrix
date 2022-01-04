#pragma once
#include <string>
#include "ILanguage.h"
#include "../headers/YandexMachine.h"
#include "MailruMachine.h"

class RuMachine : public ILanguage
{
public:
	IMachine* createMachine(string _type);
};

