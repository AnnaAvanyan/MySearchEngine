#include "../LinkRepository/LinkRepository.h"
#include <vector>

 std::vector<LinkEntry>  LinkRepository::getAll()
 {
     return this->source;
 }

 std::vector<LinkEntry>  LinkRepositoy::getBy(std::string domain, int status, int count)
 {
     std::vector<LinkEntry> result;
     for( LinkEntry elem : this->source)
     {
         if(elem.getStatus() == status && elem.getDomain() == domain )  
         {
             result.push_back(elem);
         }
         if(result.size()== count)
        {
             break;
        }
     }
     return result;
 }

 std::optonial<LinkEntry> LinkRepositoy::getByUrl(std::string url)
 {
     for( LinkEntry elem : this->source)
     {
         if(elem.url == url)
        {
             return std::make_optional(elem); 
        }
     }
    return {};
 }

  void LinkRepository::save(LinkEntry& entry)
 {
     bool is_found = false;
     for( LinkEntry elem : this->source)
     {
         if(elem.getUrl() == entry.getUrl() )  
         {
             source[elem] = entry;
             is_found = true;
             break;
         }
        
     }
    if(!is_found)
    {
        source.push_back(entry);
    }
 }

int LinkRepository::getCount()
{
    return source.size();
}