#include "..\headers\SiteProxy.h"

using namespace std;

SiteProxy::SiteProxy(string url, double scholar, double size, double visibility, double rich) {
    this->scholarParam = scholar;
    this->sizeParam = size;
    this->visibilityParam = visibility;
    this->richParam = rich;
    //cout << "proxy constructor" << endl;
    this->site = new Site(url);
}

SiteProxy::~SiteProxy() {
}


void SiteProxy::setRank() {
}

Snapshot* SiteProxy::createSnaphot() {
    return new Snapshot(this, site, this->scholarParam, this->sizeParam, this->visibilityParam, this->richParam);
}

void SiteProxy::setSite(Site* _site) {
    this->site = _site;
}

void SiteProxy::setParams(double scholar, double size, double visibility, double rich) {
    this->scholarParam = scholar;
    this->sizeParam = size;
    this->visibilityParam = visibility;
    this->richParam = rich;
}

void SiteProxy::printParams() {
    cout << "scholar: " << this->scholarParam << " ";
    cout << "size: " << this->sizeParam << " ";
    cout << "visibility: " << this->visibilityParam << " ";
    cout << "rich: " << this->richParam << endl;
}



double SiteProxy::getRank() {
    return site->getRank();
}

void SiteProxy::setUrl(string url) {
    site->setUrl(url);
}

string SiteProxy::getUrl() {
    return "";
}

void SiteProxy::setPages() {
}

vector<PageClass*> SiteProxy::getPages() {
    vector<PageClass*> pages;
    pages.push_back(new PageClass());
    return pages;
}

void SiteProxy::setFiles() {
}

vector<FileClass*> SiteProxy::getFiles() {
    vector<FileClass*> files;
    files.push_back(new FileClass("filename", "filetype"));
    return files;
}

