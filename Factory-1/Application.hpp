#pragma once
#include "Document.hpp"
#include <memory>
// will be responsible  for user input
using Documentptr = std::unique_ptr<Document>;
class Application
{
    Documentptr m_pDocument;

public:
    void newDocument(std::string doc);
    void openDocument(std::string doc);
    void saveDocument();
    virtual Documentptr createFactory() { return nullptr; }
};
