#include "EngMachine.h"
#include "../headers/YandexMachine.h"
#include "MailruMachine.h"

IMachine* EngMachine::createMachine(string type) {
	if (type == "yandex")
		return new YandexMachine();
	else if (type == "mail")
		return new MailruMachine();
}