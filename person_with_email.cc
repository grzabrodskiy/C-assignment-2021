//
//  person_with_email.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#include "person_with_email.h"

person_with_email::person_with_email(const string& n, const string& e) : person(n), m_email(e) {};

string person_with_email::get_email() const {return m_email;}

void person_with_email::set_email(const string& email) {m_email = email;}

ostream& person_with_email::print(ostream& o) const {
    return o<< "<person N " << get_name() << " E " << get_email() << " >";
}

