#include <iostream>
#include "Application.hpp"


#include "NewDocumentFactory.hpp"
using namespace std;
int main()
{  
    //Application app;
    //TextApplication app;
    //SheetApplication app;
    NewDocumentFactory nf;
    Application app(&nf);
    app.newDocument("PDF");
    app.openDocument("PDF");
    app.saveDocument();
    
    return 0;
}