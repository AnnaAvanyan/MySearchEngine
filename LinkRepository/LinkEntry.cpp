#include "LinkEntry.h"
#include <chrono>


LinkEntry::LinkEntry() : url{""}, domain{""}, status{0} , updateTime{}, lastLoadTime {}
LinkEntry::LinkEntry(std::string url, std::string domain, int status, time_t updateTime) :
                     url{url}, domain{domain}, status{status}, updateTime{updateTime} {}
 
  // getter functions
     std::string LinkEntry::getUrl()
     {
         return url;
     }
     std::string LinkEntry::getDomain()
     {
         return domain;
     }

     int LinkEntry::getStatus()
     {
         return status;
     }

    time_t LinkEntry::getUpdateTime()
    {
        return updateTime;
    }

     /*time_t LinkEntry::getlastLoadTime()
    {
        return lastLoadTime
    }
    */