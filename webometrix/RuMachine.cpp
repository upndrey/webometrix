#include "RuMachine.h"

IMachine* RuMachine::createMachine(string _type) {
	if (_type == "yandex") {
		return new YandexMachine();
	}
	else if (_type == "mail") {
		return new MailruMachine();
	}
	return new MailruMachine();
};