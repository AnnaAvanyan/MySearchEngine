#ifndef  WEB_REPOSITORY
#define  WEB_REPOSITORY
#include "WebSite.h"
#include <vector>

class WebRepository
{
private:
     std::vector<WebRepository> source;

public:
    std::vector<WebSite>  getAll();

    void save (const WebSite& site);
};



#ifndef
