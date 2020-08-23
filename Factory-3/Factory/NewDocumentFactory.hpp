#pragma once

#include "DocumentFactory.hpp"
#include "Document.hpp"

class NewDocumentFactory:public DocumentFactory
{
    public:
        Documentptr createFactory(const std::string fact) override;
};