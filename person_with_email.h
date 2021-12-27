//
//  person_with_email.hpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#ifndef person_with_email_h
#define person_with_email_h

#include <iostream>
#include <string>

#include "person.h"

class person_with_email : virtual public person {
private:
    string m_email;
public:
    person_with_email(const string& n="", const string& e="");
    string get_email() const;
    
    void set_email(const string& email);
    
    virtual ostream& print(ostream& o) const;
};





#endif /* person_with_email_h */
