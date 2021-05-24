#ifndef LOAD_RESULT_H
#define LOAD_RESULT_H
#include <memory>
#include <string>
#include "PageLoader.h"


class LoadResult{
    private: 
    /**
     *  STORES THE RESPONSE BODY
     */
    std::shared_ptr<std::string> body;
    /**
     *  STORES THE RESPONSE STATUS
     */
    long status;

    public:
    //constructor
   LoadResult(std::shared_ptr<std::string> body, long status);
   
   std::shared_ptr<std::string> getbody();
   
   long getstatus();
};




#endif
