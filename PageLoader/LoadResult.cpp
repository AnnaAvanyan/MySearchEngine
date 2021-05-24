#include "LoadResult.h"
#include <iostream>
#include <memory>

int main()
{
    LoadResult::LoadResult(std::shared_ptr<std::string> body, long status) : body{body}, status{status}
    {
 
    }

    std::shared_ptr<std::string> LoadResult::getbody()
    {
        return body;
    }
    long LoadResult::getstatus()
    {
       return status;
    }
}