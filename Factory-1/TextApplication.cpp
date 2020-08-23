#include "TextApplication.hpp"
#include "TextDocument.hpp"
Documentptr TextApplication::createFactory()
{
    return std::make_unique<TextDocument>();
}