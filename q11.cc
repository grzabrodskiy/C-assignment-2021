//
//  Q11.cpp
//  C++ assignment
//
//  Created by Greg on 24.12.21.
//

#include <iostream>
#include <stdio.h>
#import <set>
#import <unordered_set>
#include <string>

using namespace std;

// Class: person
class person {
private:
    string m_name;
    
public:
    person(const string& n = "") : m_name(n) {};
    
    string get_name() const {return m_name;}
    
    void set_name(const string& name) {m_name = name;}
    
    virtual ostream& print(ostream& o) const{
        return o<< "<person N " << m_name << " >";
    }
    
    // case insensitive comparison
    bool operator==(const person& other) const {
        //return m_name == other.m_name;
        string s1(m_name), s2(other.m_name);
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        return s1 == s2;
    }
    
    // case insensitive comparison
    bool operator<(const person& other) const {
        //return m_name < other.m_name;
        string s1(m_name), s2(other.m_name);
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        return s1 < s2;
    }
};
// operator << (non-member) calls a virtual function
ostream& operator<< (ostream& o, const person& p){
    return p.print(o);
}

// Class: person_with_phone
class person_with_phone : virtual public person {
private:
    string m_phone;
public:
    person_with_phone(const string& n = "", const string& p = "") : person(n), m_phone(p) {};
    string get_phone() const {return m_phone;}
    
    void set_phone(const string& phone) {m_phone = phone;}
    
    virtual ostream& print(ostream& o) const{
        return o<< "<person N " << get_name() << " T " << get_phone() << " >";
    }
};

// Class: person_with_email
class person_with_email : virtual public person {
private:
    string m_email;
public:
    person_with_email(const string& n = "", const string& e = "") : person(n), m_email(e) {};
    string get_email() {return m_email;}
    
    void set_email(const string& email) {m_email = email;}
    
    virtual ostream& print(ostream& o){
        return o<< "<person " << get_name() << " E " << get_email() << " >";
    }
};

// Class: person_with_phone_email
class person_with_phone_email : public person_with_phone, public person_with_email {
public:
    person_with_phone_email(const string& n = "", const string& p = "", const string& e = "") : person(n), person_with_phone(n, p), person_with_email(n, e) {};

    
    virtual ostream& print(ostream& o){
        return o<< "<person " << get_name() << " P " << get_phone()
            << " E " << get_email() << " >";
    }
};

// Class: contacts
class contacts {
private:
    // second template parameter (less comparison) will be defined in the constructor
    // N.B. set uses "less then" for comparison - not "=="
    set<person*, bool(*)(const person*, const person*)> m_people;
public:
    // passing "less then" function to the set
    contacts() : m_people([](const person* p1, const person* p2){return *p1 < *p2;}){}
    
    void add(person* p) {
        m_people.erase(p);
        m_people.insert(p);
    }
    
    void print() {
        for(auto p : m_people) {
            p->print(cout);
            cout <<  endl;
        }
    }
   
};

int main() {
    person p;
    p.set_name("Nala");
    
    person_with_phone pp;
    pp.set_name("Mr.Meow");
    pp.set_phone("+41799584176");
    
    cout << p << endl << pp << endl;
    return 0;
}



