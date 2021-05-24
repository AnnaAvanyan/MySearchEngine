#include <string>

DocumentInfo::DocumentInfo() = default;

DocumentInfo::DocumentInfo(std::string title, std::string desctiption, std::string text): 
                           title{title}, description{description},text{text}
{
}

std::string DocumentInfo::getTitle()
{
    return title;
}
std::string DocumentInfo::getDesctription()
{
    return desctription;
}
std::string DocumentInfo::getText()
{
    return text;
}

