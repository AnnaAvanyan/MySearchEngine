#ifndef  DOCUMENT_ENTRY
#define  DOCUMENT_ENTRY
#include <string>

class DocumentEntry
{
private:
    std::string url;
    std::string title;
    std::string desctiption;
    std::string text;
    std::time_t updateTime
public:
    DocumentEntry(std::string url,std::string title, std::string desctiption, std::string text,std::time_t updateTime);
    DocumentEntry();

};



#endif
