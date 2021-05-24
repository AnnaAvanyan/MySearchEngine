#include "../HtmlDocument/HtmlDocument.h"

 HtmlDocument::HtmlDocument(const std::string& html) 
 {
     this->output = nullptr;
     this->html = html;
 }

 bool HtmlDocument::parse()
 {
     output = gumbo_parse(html.c_str());
     //if(!output)
       // return false;
    return true;
 }

 void HtmlDocument::visitElements(std::function<void(HtmlElement)> visitor)
 {
     this->visitElement(output->root, visitor);
 }

 void HtmlDocument::visitElement(GumboNode* node, std::function<void(HtmlElement)> visitor)
 {
     if(node->type != GUMBO_NODE_ELEMENT)
            return;

      visitor(HtmlElement(node));
      GumboVector* children = &node->v.element.children;
      for(unsigned int i=0; i< chldren->length; ++i)
      {
           void HtmlDocument::visitElement(static_cast<GumboNode*> children->data[i], visitor)

      }
 }
 HtmlDocument::~HtmlDocument()
 {
     if(this->output  != nullptr)
        gumbo_destroy_output(&kGumboDefaultOptions, this->output);
 }