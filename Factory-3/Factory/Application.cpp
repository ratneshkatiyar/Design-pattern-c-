#include "Application.hpp"
#include "TextDocument.hpp"
#include "DocumentFactory.hpp"

Application::Application(DocumentFactory*df):m_pFactory(df){}

void Application::newDocument(std::string doc)
{
    m_pDocument =  m_pFactory->createFactory(doc);
   
  // m_pDocument = createFactory();
}
void Application::openDocument(std::string doc)
{
    m_pDocument = m_pFactory->createFactory(doc);
    m_pDocument->read();
    //m_pDocument = createFactory();
   
}
void Application::saveDocument()
{
    m_pDocument->write();
}
