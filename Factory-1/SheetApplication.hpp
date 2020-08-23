#pragma once 
#include "Application.hpp"
class SheetApplication:public Application
{
    public:
        Documentptr createFactory() override;
};