//
//  contacts.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

//#ifdef Q13

#include <stdio.h>
#include "contacts.h"

#include <iostream>
#import <set>
#include <string>

contacts::contacts(): m_people([](const person* p1, const person* p2){return *p1 < *p2;}){};

void contacts::add(person* p) {
    m_people.erase(p);
    m_people.insert(p);
}

void contacts::print() {
    for(auto p : m_people) {
        p->print(cout);
        cout <<  endl;
    }
}

//#endif
