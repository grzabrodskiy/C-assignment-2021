//
//  person_with_phone_email.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//


#include "person_with_phone_email.h"

person_with_phone_email::person_with_phone_email(const string& n, const string& p, const string& e) : person(n), person_with_phone(n, p), person_with_email(n, e) {};

ostream& person_with_phone_email::print(ostream& o) const{
    return o<< "<person N " << get_name() << " P " << get_phone()
        << " E " << get_email() << " >";
}

