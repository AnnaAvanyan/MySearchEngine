#include "../LinkExtractor/LinkExtractor.h"


std::vector<std::string> LinkExtractor::extract(const HtmlDocument& doc)
{
    std::vector<std::string> links;

    doc.visitElements([&links](HtmlElement elem){
         if(!elem.isTagA())
            return;

    auto href = elem.getAttribute ("href");
     if(href.size() > 0)
         links.push_back(href);
            

    });
    
   return links;
}