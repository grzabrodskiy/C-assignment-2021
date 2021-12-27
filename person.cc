//
//  person.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//



#include "person.h"

using namespace std;

person::person(const string& n) : m_name(n){};

string person::get_name() const {return m_name;}

void person::set_name(const string& name) {m_name = name;}

ostream& person::print(ostream& o) const{
    return o << "<person N " << m_name << " >";
}

bool person::operator==(const person& other) const {
    //return m_name == other.m_name;
    string s1(m_name), s2(other.m_name);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s1 == s2;
}

bool person::operator<(const person& other) const {
    //return m_name < other.m_name;
    string s1(m_name), s2(other.m_name);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s1 < s2;


}

ostream& operator<< (ostream& o, const person& p){
    return p.print(o);
}

