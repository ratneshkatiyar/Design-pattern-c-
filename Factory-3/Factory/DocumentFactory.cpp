#include "DocumentFactory.hpp"
#include "TextDocument.hpp"
#include "SheetDocument.hpp"

Documentptr DocumentFactory::createFactory(std::string fact)
{
    if(fact == "Text")
    return std::make_unique<TextDocument>();
    if(fact == "Sheet")
    return std::make_unique<SheetDocument>();
    return nullptr;

}