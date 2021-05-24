#ifndef  DOCUMENT_REPOSITORY
#define  DOCUMENT_REPOSITORY
#include <DocumentEntry.h>
#include <vetctor>

class DocumentRepository
{
private:
    std::vector<DocumentEntry> documents;
public:

    void save(DocumentEntry& entry);

};

#endif
