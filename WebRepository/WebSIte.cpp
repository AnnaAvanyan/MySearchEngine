#include "WebSite.h"


WebSite::WebSite(std::string domain,std::string homepage,std::time_t lascrawlTime ):
                 domain{domain}, homepage{homepage}, lascrawlTime{lascrawlTime}
{}

    std::string WebSite::getDomain()
    {
        return domain;
    }
    std::string WebSite::getHomepage()
    {
        return homepage;
    }
    std::time_t WebSite::getLascrawlTime()
    {
        return lascrawlTime;
    }
