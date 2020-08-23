#include "SheetApplication.hpp"
#include "SheetDocument.hpp"
Documentptr SheetApplication::createFactory()
{
    return std::make_unique<SheetDocument>();
}