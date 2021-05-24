#include "../HtmlDocument/HtmlNode.h"

   HtmlNode::HtmlNode(GumboNode* node) : node{node}{}

   bool HtmlNode::isElement()
   {
       if(node->type != GUMBO_NODE_ELEMENT)
            return false;
        return true;
   }
