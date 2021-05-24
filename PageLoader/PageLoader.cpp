#include "PageLoader.h"
#include <iostream>
#include <string>
#include <curl/curl.h>

size_t getData(char* buffer, size_t itmsize, size_t itmcount, void* dest )
{ 
    size_t bytes = itmsize*itmcount;
    std::string* s = (std::string*)dest;
    s->append(buffer, bytes);
    return bytes;
}


LoadResult PageLoader::load (const std::string& url)
{
    CURL *curl = curl_easy_init();
     if(!curl)
     {
         //std::cout<<"init failed";
         return EXIT_FAILURE;
     }
    std::string* contents = new std::string;

     curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
     curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, getData);
     curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void*)contents);
     curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);

      /*
        conncect to the url and download contents
      */
        CURLcode  result  = curl_easy_perform(curl);
        if(result != CURL_OK)
        {
             //std::cout<<"download problem!!!";
             exit(result);
        }
    long InfoResponseCode;
     curl_easy_getinfo(curl,CURLINFO_RESPONSE_CODE, &InfoResponseCode);
     curl_easy_cleanup(curl);

     
    return LoadResult(std::make_shared<std::string>(contents),InfoResponseCode);
}