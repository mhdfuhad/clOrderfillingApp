//
//  Station.h
//  MS1
//
//  Created by Mohammad Fuhad Uddin on 2021-07-12.
//

#ifndef SDDS_Station_h
#define SDDS_Station_h

#include <string>

namespace sdds{

class Station {
    int m_id{0};
    std::string m_name;
    std::string m_desc;
    size_t m_serial{0};
    size_t m_stock{0};
    static size_t m_widthField;
    static int id_generator;
public:
    Station(const std::string& str);
    const std::string& getItemName() const;
    size_t getNextSerialNumber();
    size_t getQuantity() const;
    void updateQuantity();
    void display(std::ostream& os, bool full) const;
};

}

#endif /* Station_h */
