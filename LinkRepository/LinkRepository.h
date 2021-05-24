#ifndef  LINK_REPOSITORY
#define  LINK_REPOSITORY
#include "../LinkRepository/LinkEntry.h"
#include <vetctor>

#include <optional>

class LinkRepository
{
private:
  
    std::vector<LinkEntry> source;

public:
// push to vector and return all links
    std::vector<LinkEntry>  getAll() const;

    // return links if they exists in source
    std::vector<LinkEntry>  getBy(std::string domain, int status, int count) const;
    
    // return link if it exists in source
    std::optonial<LinkEntry> getByUrl(const std::string& url) const;
   
    //save link to the source
    void save (LinkEntry& entry); 
};

#endif  
