//
//  person_with_phone_email.hpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#ifndef person_with_phone_email_hpp
#define person_with_phone_email_hpp

#include <iostream>
#import <set>
#include <string>

#include "person.h"
#include "person_with_phone.h"
#include "person_with_email.h"

class person_with_phone_email : public person_with_phone, public person_with_email {
public:
    person_with_phone_email(const string& n="", const string& p="", const string& e="");
    
    virtual ostream& print(ostream& o) const;
};






#endif /* person_with_phone_email_hpp */
