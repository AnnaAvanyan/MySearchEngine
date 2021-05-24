#include "PageLoader/PageLoader.h"
#include "HtmlDocument/HtmlDocument.h"
#include "LinkRepository/LinkRepository.h"
#include "LinkExtractor/LinkExtractor.h"
#include "DocumentExtractor/DocumentExtractor.h"
#include "WebRepository/WebRepository.h"
#include "LinkRepository/LinkStatus.h"
#include "DocumentRepository/DocumentRepository.h"

int main()
{
    WebRepository webrep;
    webrep.save(WebSite("rau.am", "https://rau.am/", time(nullptr)));

    LinkRepository linkrep;
    PageLoader pageLoader;
    LinkExtractor linkExtractor;
    DocumentExtractor docExtractor;
    DocumentRepository docrep;
    for(auto& website : webrep.getAll())
    {
       linkrep.save(LinkEntry(website.getHomepage(), website.getDomain(),LinkStatus::WAITING, time(nullptr)));
       while(true)
       {
           auto links=linkrep.getBy(website.getDomain(),LinkStatus::WAITING,10);

           if(links.empty())
           {
               break;
           }

           for(auto& link: links)
           {
               auto loadResult = pageLoader.load(link.getUrl());
               if(loadResult.getStatus()<200 || loadResult.getStatus()>300)
                 {
                      linkrep.save(LinkEntry(link.getUrl(), link.getDomain(),LinkStatus::ERROR, time(nullptr)));
                      continue;
                 }

                 const std::string html = *loadResult.getBody().get();

                 HtmlDocument doc(html);
                 doc.parse(); 
                 
                 auto extractedLinks = linkExtractor.extract(doc);
                 for(auto& newLink : extractedLinks)
                 {
                    if(linkrep.getByUrl(newLink).has_value())
                    {
                        continue;
                    }
                    
                    linkrep.save(LinkEntry(newLink, website.getDomain(),LinkStatus::WAITING,time(nullptr)));
                 }
                 
                   auto docInfo =  docExtractor.extractInfo(doc);

                   docrep.save(DocumentEntry(link.getUrl(),docInfo.getTitle(),docInfo.getDesctription(),docInfo.getText(),time(nullptr)));

                   linkrep.save(LinkEntry(link.getUrl(), link.getDomain(),link.LinkStatus::SUCCESS,time(nullptr) ));

                   std::cout<< "links: "<<links.getCount();
           }
       }

       webrep.save(WebSite(website.getDomain(), website.getHomepage(),time(nullptr)));
    }

}