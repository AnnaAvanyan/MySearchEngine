#ifndef  LINK_EXTRACTOR_H
#define  LINK_EXTRACTOR_H
#include <../HtmlDocument/HtmlDocument.h>
//#include <gumbo.h>
#include <vector>
#include <string>

class  LinkExtractor
{

public:
    LinkExtractor();
    std::vector<std::string> extract(const HtmlDocument& doc);
    
};



#endif  
