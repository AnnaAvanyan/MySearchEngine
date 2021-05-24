// информация о ссылке
#ifndef  LINK_ENTRY
#define   LINK_ENTRY

#include <chrono>
#include <ctime>
#include <string>
#include "LinkStatus.h"

class LinkEntry
{
private:
    std::string url;
    std::string domain;
    int status;
    std::time_t updateTime;
    //std::time_t lastLoadTime;


public:
    LinkEntry(std::string url,std::string domain, int status, std::time_t updateTime);
    LinkEntry();
    // getter functions
     std::string getUrl();
     std::string getDomain();
     int getStatus();
     time_t getUpdateTime();
    // time_t getlastLoadTime();
};


#endif 
