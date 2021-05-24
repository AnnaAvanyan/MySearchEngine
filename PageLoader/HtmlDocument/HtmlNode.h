#ifndef  HTML_NODE_H
#define  HTML_NODE_H
#include "gumbo.h"

class HtmlNode
{
protected:
     GumboNode* node;

public:
    HtmlNode(GumboNode* node);
    
    // check node->type
    virtual  bool isElement();
    
};



#endif 
