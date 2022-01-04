#include "FileManager.h"

void FileManager::subscribe(IListener* _listener) {
	this->listeners.push_back(_listener);
}

void FileManager::unsubscribe() {
}



void FileManager::notify(string event) {
	for (IListener*& element : this->listeners) {
		element->update(event);
	}

}