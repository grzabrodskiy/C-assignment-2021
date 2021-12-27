//
//  Q6.cpp
//  C++ assignment
//
//  Created by Greg on 21.12.21.
//


#include <stdio.h>

#include <iostream>

#include <string>

#include <sstream>

#include <vector>

#include <exception>

using namespace std;        // File: q6.cc

class m2dvector {

  vector<int> vi = {0, 0};

 public:

  m2dvector(vector<int> some_vi) : vi(some_vi) {if (some_vi.size() > 2) throw std::invalid_argument("Input vector should have size 2."); }

  const vector<int> & get_data() const { return vi; }

};

/* Put your code here */

ostream &operator<<(ostream &output, const m2dvector& v) {
    return output << "<" << v.get_data()[0] << " " << v.get_data()[1] << ">";
}

istream &operator>>(istream &input, m2dvector& v) {
    
    vector<int> v1 = {0, 0};
    //
    // input stream can look like
    // {white space}[<] int1 {white space} int2 [>]
    //
    input >> std::ws;
    input.ignore(1, '<');
    input >> v1[0];
    input >> std::ws;
    input >> v1[1];
    input.ignore(1,'>');
    
    //input >> "<" >> v1[0] >> " " >> v1[1] >> ">";
    
    v = v1;
    
    return input;
}
 

int main() {
  try {

    vector<int> vi = {11, 12, 13, 14, 15};

    m2dvector z1({vi[0], vi[1]});

    m2dvector z2({vi[3], vi[4]});

    cout << z1 << endl; /* should print: <11 12> */

    cout << z2 << endl; /* should print: <14 15> */

    string s1 = "<11 12>    <13 14>a";

    istringstream iss(s1);

    iss >> z2 >> z1;

    cout << z1 << endl; /* should print: <13 14> */

    cout << z2 << endl; /* should print: <11 12> */

    char c;

    iss >> c; cout << c << endl; /* should print ‘a’ – the char after the 2nd m2dvector above. */

    ostringstream oss;

    oss << z2;

    string so = oss.str();

    for ( char c : so )

      if (c == '\n') {cerr << "Output contains a newline\n"; return 0;}

    cerr << "Output does not contain a newline\n";
  } catch (...) { throw; }

  return 0;

}






