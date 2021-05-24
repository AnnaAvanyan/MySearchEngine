#include "DocumentRepository.h"

void LinkRepository::save(DocumentEntry& entry)
 {
     bool is_found = false;
     for( DocumentEntry elem : this->documents)
     {
         if(elem.getUrl() == entry.getUrl() && elem.getTitle() == entry.getTitle())  
         {
             documents[elem] = entry;
             is_found = true;
             break;
         }
        
     }
    if(!is_found)
    {
        documents.push_back(entry);
    }
 }