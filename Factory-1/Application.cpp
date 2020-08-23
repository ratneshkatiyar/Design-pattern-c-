#include "Application.hpp"
#include "TextDocument.hpp"
#include "DocumentFactory.hpp"

void Application::newDocument(std::string doc)
{
   // m_pDocument = DocumentFactory::createFactory(doc);
   m_pDocument = createFactory();
}
void Application::openDocument(std::string doc)
{
   // m_pDocument = DocumentFactory::createFactory(doc);
   m_pDocument = createFactory();
   m_pDocument->read();
}
void Application::saveDocument()
{
    m_pDocument->write();
}
