#include "NewDocumentFactory.hpp"
#include "PDFDocument.hpp"

#include <memory>

Documentptr NewDocumentFactory::createFactory(const std::string doc)
{
    if (doc == "PDF")
        return std::make_unique<PDFDocument>();

    return nullptr;
}