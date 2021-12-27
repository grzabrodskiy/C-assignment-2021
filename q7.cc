//
//  Q7.cpp
//  C++ assignment
//
//  Created by Greg on 23.12.21.
//



#include <stdio.h>


#include <iostream>

#include <map>

#include <string>

#include <algorithm>


using namespace std;        // File: q7.cc

 

template <typename X, typename Y>

class class1 {

  map<X, Y> map1;

 public:

  class1(map <X, Y> some_map);

  const map <X, Y> & get_data() const;

};

 
/* a) Put your code here to get it to compile */
template <typename K, typename V>
class1<K, V>::class1(map<K, V> some_map): map1(some_map){};


template <typename K, typename V>
const map <K, V>& class1<K, V>::get_data() const {
    return map1;
}




int main() {

  map<int, float> mi2f = { {1, 11}, {2, 12}, {3, 13}};

  class1<int, float> c1(mi2f);

  const map<int, float> & c1dt = c1.get_data();

/* b) Put your code here to print the elements of c1dt. */
    
    for (auto const &pair: c1dt) {
        std::cout << "{" << pair.first << " , " << pair.second << "}" << endl;
    }
    
    //print_map(c1dt);

  return 0;

}









