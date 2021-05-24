#ifndef  HTML_DOCUMENT_H
#define  HTML_DOCUMENT_H
#include <string>
#include <functional>
#include "gumbo.h"

class HtmlDocument
{
private:
    GumboNode* node;
    GumboOutput* output;
    std::string html; 
    void visitElement(GumboNode* node, std::function<void(HtmlElement)> visitor);
  
public:
    HtmlDocument(const std::string& html);
    bool parse();
    void visitElements(std::function<void(HtmlElement)> visitor);
    ~HtmlDocument();

};







#endif 
