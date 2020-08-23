#pragma once
#include "Application.hpp"
#include <string>
class DocumentFactory
{
    public:
    static Documentptr createFactory(std::string fact);

};