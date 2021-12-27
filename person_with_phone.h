//
//  person_with_phone.hpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#ifndef person_with_phone_h
#define person_with_phone_h

#include <iostream>
#include <string>

#include "person.h"

class person_with_phone : virtual public person {
private:
    string m_phone;
public:
    person_with_phone(const string& n="", const string& p="");
    
    string get_phone() const;
    
    void set_phone(const string& phone);
    
    virtual ostream& print(ostream& o) const;
};

#endif /* person_with_phone_h */
