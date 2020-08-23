#pragma once

#include "Document.hpp"

class SheetDocument: public Document
{
    public:
        void write() override;
        void read() override;
};