#pragma once
#include "Document.hpp"
#include "DocumentFactory.hpp"
#include <memory>
// will be responsible  for user input

class Application
{
    Documentptr m_pDocument;
    DocumentFactory *m_pFactory {};

public:
    Application(DocumentFactory* docfactory);
    void newDocument(std::string doc);
    void openDocument(std::string doc);
    void saveDocument();
   // virtual Documentptr createFactory() { return nullptr; }
};
