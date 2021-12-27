//
//  Q9.cpp
//  C++ assignment
//
//  Created by Greg on 23.12.21.
//


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


class person_with_phone : virtual public person {
private:
    string m_phone;
public:
    string get_phone() {
        return m_phone;
    }
    
    void set_email(string phone) {
        m_phone = phone;
    }
};


class person_with_email : virtual public person {
private:
    string m_email;
public:
    string get_email() {
        return m_email;
    }
    
    void set_email(string email) {
        m_email = email;
    }
    
};

int main() {
    return 0;
}



