#include "WebRepository.h"


std::vector<WebSite>  WebRepository::getAll()
{
    return this->source;
}

void WebRepository::save (const WebSite& site)
{
   bool is_found = false;
     for( WebSite elem : this->source)
     {
         if(elem.getDomain() == site.getDomain() )  
         {
             source[elem] = site;
             is_found = true;
             break;
         }
        
     }
    if(!is_found)
    {
        source.push_back(site);
    }
}