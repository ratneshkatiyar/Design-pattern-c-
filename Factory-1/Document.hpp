#pragma once

class Document
{
    public: 
    virtual void write() =0;
    virtual void read() =0;
   // virtual ~Document() = default;
};