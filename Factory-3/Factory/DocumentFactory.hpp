#pragma once
//#include "Application.hpp"
#include "Document.hpp"
#include <string>
class DocumentFactory
{
    public:
    virtual Documentptr createFactory(const std::string fact);

};