#pragma once

#include "Document.hpp"

class PDFDocument: public Document
{
    public:
    void read() override;
    void write() override;

};