#include <iostream>
#include <string>
#include <windows.h>

#include "..\headers\Indicators.h"
#include "..\headers\SiteProxy.h"
#include "..\headers\ISite.h"
#include "..\webometrix\FilesGroup.h"
#include "../webometrix/RichState.h"
#include "../webometrix/Snapshot.h"
#include "../webometrix/FileManager.h"

using namespace std;
int main(int argc, char* argv[])
{
    string url = "text";
    
    SiteProxy* site = new SiteProxy(url, 1, 1, 1, 1);
    Snapshot* proxySnapshot = site->createSnaphot();
    site->setParams(0, 0, 0, 0);
    site->printParams();
    proxySnapshot->restore();
    site->printParams();

    cout << endl;

    Indicators* indicators = new Indicators();
    indicators->setState(new RichState());
    indicators->createIndicator();
    cout << "rich indicator value: " << indicators->getIndicatorValue() << endl;
    indicators->createIndicator();
    cout << "scholar indicator value: " << indicators->getIndicatorValue() << endl;
    indicators->createIndicator();
    cout << "size indicator value: " << indicators->getIndicatorValue() << endl;
    indicators->createIndicator();
    cout << "visibility indicator value: " << indicators->getIndicatorValue() << endl;

    cout << endl;

RichIndicator* rich = new RichIndicator();
ScholarIndicator* scholar = new ScholarIndicator();
FileManager* manager = new FileManager();
manager->subscribe(rich);
manager->subscribe(scholar);
FilesGroup* group = new FilesGroup("group1", manager);

FileClass* file1 = new FileClass("file1", "fb2");
FileClass* file2 = new FileClass("file2", "txt");
FileClass* file3 = new FileClass("file3", "docx");
FileClass* file4 = new FileClass("file4", "mp3");
FileClass* file5 = new FileClass("file5", "fb2");

group->addFile(file1);
group->addFile(file2);
group->addFile(file3);
group->addFile(file4);
group->addFile(file5);




    return 0;
}
