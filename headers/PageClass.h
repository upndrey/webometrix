#pragma once

#include <string>
#include <vector>

using namespace std;

class PageClass {
private:
	string url;

	string html;

	vector<string> links;

public:
	PageClass();

	virtual void parsePage();

	virtual void setLinks();
};
