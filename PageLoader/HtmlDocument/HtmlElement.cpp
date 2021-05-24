#include "../HtmlDocument/HtmlElement.h"
#include "gumbo.h"

   HtmlElement::HtmlElement(GumboNode* node) : node{node}{}
   
    bool HtmlElement::isElement() override
    {
        if(node->type != GUMBO_NODE_ELEMENT)
            return false;
        return true;
    }
    bool HtmlElement::isTagA() const
    {
          if(node->v.element.tag != GUMBO_TAG_A)
            return false;
        return true;
    }
    std::string HtmlElement::getAttribute (cnost std::string& name)
    {
        GumboAttribute* attribute = gumbo_get_attribute(&node->v.element.attributes, name.c_str());
        if(!attribute)
            return "";
        return std::string{attribute->value};
    }
   
    std::string HtmlElement::getInnerText()
 {
   
      GumboVector* children = &node->v.element.children;
      for(unsigned int i=0; i< chldren->length; ++i)
      {
          std::string result = "";
          auto child = static_cast<GumboNode*> children->data[i];
          if(child->type != GUMBO_NODE_TEXT)
              return;
        
         result.append(child->v.text.text);
      }
      return result;
 }     

  bool  HtmlElement::isTagsforText()
  {
      auto tag = node->v.element.tag;
      if(tag == GUMBO_TAG_STYLE || tag == GUMBO_TAG_SCRIPT)
      {
            return false;
      }
      
      return true;
  }
  bool HtmlElement::isTagTitle()
  {
      auto tag = node->v.element.tag;
      if(tag == GUMBO_TAG_TITLE)
      {
          return true;
      }
      
    return false;
  }

  bool HtmlElement::isTagforDesctiption()
  {
       auto tag = node->v.element.tag;
      if(tag == GUMBO_TAG_META)
      {
          return true;
      }
      
    return false;
  }
