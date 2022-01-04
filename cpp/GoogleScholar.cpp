#include "..\headers\GoogleScholar.h"
#include <vector>

#include <iostream>
using namespace std;

GoogleScholar::GoogleScholar() {
}


void GoogleScholar::setDocsCount(int _docsCount) {
	this->docsCount = _docsCount;
}

void GoogleScholar::calcQuoting(int _quoting) {
	//cout << "GoogleScholar->calcQuoting: quoting Google" << endl;
	this->quotingCount = _quoting;
}



int GoogleScholar::getDocsCount() {
	return 0;
}