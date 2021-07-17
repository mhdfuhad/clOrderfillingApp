//
//  Utilities.cpp
//  MS1
//
//  Created by Mohammad Fuhad Uddin on 2021-07-12.
//

#include "Utilities.h"

namespace sdds{

char Utilities::m_delimiter = ' ';

void Utilities::setFieldWidth(size_t newWidth){
    m_widthField = newWidth;
};
size_t Utilities::getFieldWidth() const{
    return m_widthField;
};
std::string Utilities::extractToken(const std::string& str, size_t& next_pos, bool& more){
    std::string token = str.substr(next_pos);
    size_t pos = token.find(m_delimiter);
    
    if(pos != std::string::npos){
        token = token.substr(0, pos);
        next_pos += pos + 1;
        if(!token.empty()){
            more = true;
        }else{
            more = false;
            throw "No more data to be collected";
        }
    }else{
        more = false;
    }
    
    if(m_widthField < token.length())
        m_widthField = token.length();
    
    return token;
};
void Utilities::setDelimiter(char newDelimiter){
    m_delimiter = newDelimiter;
};
char Utilities::getDelimiter(){
    return m_delimiter;
};

}
