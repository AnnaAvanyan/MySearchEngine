#include "DocumentExtractor.h"


DocumentInfo DocumentExtractor::extractInfo(HtmlDocument& doc)
{
    std::string title;
    std::string desctiption;
    std::string text;
    doc.visitElements([&text, &title, &descriptiom](HtmlElement(elem)
    {
        if(!elem.isTagsforText())
        {
            return;
        }
        if(elem.isTagTitle())
        {
            title.append(elem.getInnerText());
        }
        if(elem.isTagforDesctiption())
        {
            desctiption.append(elem.getInnerText());
        }

        text.append(elem.getInnerText());
    });
    
    return DocumentInfo(title,desctiption, text);
}
 