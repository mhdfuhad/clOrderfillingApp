//
//  Utilities.h
//  MS1
//
//  Created by Mohammad Fuhad Uddin on 2021-07-12.
//

#ifndef SDDS_Utilities_h
#define SDDS_Utilities_h

#include <string>

namespace sdds{

class Utilities {
    size_t m_widthField{1};
    static char m_delimiter;
public:
    void setFieldWidth(size_t newWidth);
    size_t getFieldWidth() const;
    std::string extractToken(const std::string& str, size_t& next_pos, bool& more);
    static void setDelimiter(char newDelimiter);
    static char getDelimiter();
};

}

#endif /* Utilities_h */
