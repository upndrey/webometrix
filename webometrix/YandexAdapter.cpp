#include "YandexAdapter.h"
#include <iostream>

using namespace std;

YandexAdapter::YandexAdapter(YandexScholar* _yandex) {
	yandex = _yandex;
}


void YandexAdapter::setDocsCount(int _docsCount) {
	this->docsCount = _docsCount;
}

void YandexAdapter::calcQuoting(int _quoting) {
	//cout << "YandexAdapter->calcQuoting: no quoting for yandex, so this function isn't included in YandexScholar" << endl;
}

int YandexAdapter::getDocsCount() {
	return 0;
}