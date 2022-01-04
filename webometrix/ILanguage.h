#pragma once
#include "../headers/IMachine.h"

class ILanguage
{
    virtual IMachine* createMachine(string type) = 0;
};

