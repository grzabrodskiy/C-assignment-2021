//
//  main.cpp
//  C++ assignment
//
//  Created by Greg on 21.12.21.
//


#include <iostream>

using namespace std;    // File: q1.cc

class person {

  int age;

 public:

  person(int a = 10) : age(a) {}

  int get_age();

  void set_age(int a);

};

/* Your code here */

void person::set_age(int a) {person::age = a;}

int person::get_age() {return person::age;}

/* End of - Your code here */

int main() {

  person p1;

  p1.set_age(25);

  cout << p1.get_age() << endl; // should print 25

  return 0;

}


