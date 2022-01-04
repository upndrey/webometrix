#pragma once
class SiteProxy;
class Site;


class Snapshot
{
private:
	SiteProxy* savedProxy;
    Site* site;
    double scholarParam;
    double sizeParam;
    double visibilityParam;
    double richParam;
public:
    Snapshot(SiteProxy*, Site*, double, double, double, double);
    void restore();
};

