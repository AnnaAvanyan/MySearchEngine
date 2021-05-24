#ifndef  WEB_SITE
#define  WEB_SITE

#include <string>
#include <ctime>

class WebSite
{
private:
    std::string domain;
    std::string homepage;
    std::time_t lascrawlTime;

public:
    WebSite(std::string domain,std::string homepage,std::time_t lascrawltime );
    std::string getDomain();
    std::string getHomepage();
    std::time_t getLascrawlTime();

    
};



#endif
