#ifndef  DOCUMENT_INFO
#define  DOCUMENT_INFO
#include <string>


class DocumentInfo
{
private:
    std::string title;
    std::string desctiption;
    std::string text;

public:
    DocumentInfo(std::string title, std::string desctiption, std::string text);
    DocumentInfo();
    std::string getTitle();
    std::string getDesctription();
    std::string getText();
    
};



#endif 

