//
//  person_with_phone.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//


#include "person_with_phone.h"

    person_with_phone::person_with_phone(const string& n, const string& p)
        : person(n), m_phone(p) {};
    string person_with_phone::get_phone() const {return m_phone;}
    
    void person_with_phone::set_phone(const string& phone) {m_phone = phone;}
    
    ostream& person_with_phone::print(ostream& o) const{
        return o<< "<person N " << get_name() << " T " << get_phone() << " >";
    }


