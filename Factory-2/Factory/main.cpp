#include <iostream>
#include "Application.hpp"
#include "TextDocument.hpp"
#include "TextApplication.hpp"
#include "SheetApplication.hpp"
using namespace std;
int main()
{  
    //Application app;
    //TextApplication app;
    //SheetApplication app;
    
    Application app;
    app.newDocument("Sheet");
    app.openDocument("Sheet");
    app.saveDocument();
    
    return 0;
}