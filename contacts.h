//
//  contacts.h
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#ifndef contacts_h
#define contacts_h
#include <iostream>
#include <string>

#include <set>
#include "person.h"

class contacts {
private:
    set<person*, bool(*)(const person*, const person*)> m_people;
public:
    contacts();
    
    void add(person* p);
    
    void print();
     
};
#endif /* contacts_h */
