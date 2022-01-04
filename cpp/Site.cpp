#include "..\headers\Site.h"
#include <vector>

#include <iostream>
using namespace std;

Site::Site(string url) {
    //cout << "realObject constructor" << endl;
    this->url = url;
}

Site::~Site() {
}


void Site::setRank() {
    //cout << "realObject setRank" << endl;
}


double Site::getRank() {
    return this->rank;
}

void Site::setUrl(string url) {
}

string Site::getUrl() {
    return "";
}

void Site::setPages() {
}

vector<PageClass*> Site::getPages() {
    vector<PageClass*> pages;
    pages.push_back(new PageClass());
    return pages;
}

void Site::setFiles() {
}

vector<FileClass*> Site::getFiles() {
    vector<FileClass*> files;
    files.push_back(new FileClass("filename", "filetype"));
    return files;
}

