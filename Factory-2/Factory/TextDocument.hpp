#pragma once
#include "Document.hpp"

class TextDocument: public Document
{
    public:
        void write() override;
        void read() override;
        ~TextDocument() = default;
};
