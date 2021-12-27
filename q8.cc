//
//  Q8.cpp
//  C++ assignment
//
//  Created by Greg on 23.12.21.
//



#include <map>

#include <string>

#include <algorithm>



#include <iostream>
#include <stdio.h>

using namespace std;


class person {
private:
    string m_name;
    
    
public:
    string get_name() {
        return m_name;
    }
    
    void set_name(string name) {
        m_name = name;
    }
    
};


int main() {

    person nala;
    nala.set_name("nala");
    assert(nala.get_name() == "nala");
    
    return 0;
    
}









