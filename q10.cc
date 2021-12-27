//
//  Q10.cpp
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
    
    void set_phone(string phone) {
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

class person_with_phone_email : public person_with_phone, public person_with_email {
    
};


int main() {
    person_with_phone_email abc;
    abc.set_name("mr meow");
    abc.set_email("dj9qw");
    cout << abc.get_name() << abc.get_email() << endl;
    return 0;
}


