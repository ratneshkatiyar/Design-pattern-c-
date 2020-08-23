#pragma once
#include <memory>

class Document
{
    public: 
    virtual void write() =0;
    virtual void read() =0;
   virtual ~Document() = default;
};
using Documentptr = std::unique_ptr<Document>;