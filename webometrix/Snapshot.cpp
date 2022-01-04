#include "Snapshot.h"
#include "../headers/SiteProxy.h"

Snapshot::Snapshot(SiteProxy* _proxy, Site* _site, double scholar, double size, double visibility, double rich) {
	this->savedProxy = _proxy;
	this->site = _site;
	this->scholarParam = scholar;
	this->sizeParam = size;
	this->visibilityParam = visibility;
	this->richParam = rich;
}

void Snapshot::restore() {
	this->savedProxy->setParams(this->scholarParam, this->sizeParam, this->visibilityParam, this->richParam);
	this->savedProxy->setSite(this->site);
}
