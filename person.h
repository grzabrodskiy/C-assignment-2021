//
//  person.h
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//

#ifndef person_h
#define person_h

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class person {
private:
    string m_name;
        
public:
    person(const string& n="");
    
    string get_name() const;
    
    void set_name(const string& name);
    
    virtual ostream& print(ostream& o) const;
    
    bool operator==(const person& other) const;
    
    bool operator<(const person& other) const;

};

ostream& operator<< (ostream& o, const person& p);

#endif /* person_h */









