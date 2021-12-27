//
//  Q13.cpp
//  C++ assignment
//
//  Created by Greg on 26.12.21.
//


#include <iostream>
#include <string>

#include "person.h"
#include "person_with_phone.h"
#include "person_with_email.h"
#include "person_with_phone_email.h"
#include "contacts.h"

int main() {
    
    contacts c;

    person DickTracey0("DickTracey");
    c.add(&DickTracey0);
    
    person TomJones("TomJones");
    c.add(&TomJones);
    
    person_with_phone DickTracey("DickTracey", "+49.921.1434");
    c.add(&DickTracey);
    
    person_with_email HarryPotter("HarryPotter", "hpotter@gmail.com");
    c.add(&HarryPotter);
    
    person_with_phone_email MaryJones("MaryJones", "39.921.1434", "mjones@gmail.com");
    c.add(&MaryJones);
    
    person_with_phone_email JohnSmith("JohnSmith", "33.921.1434", "jsmith@gmail.com");
    c.add(&JohnSmith);
    
    person_with_phone p1("debbeeebacd", "1479959018471174864108");
    c.add(&p1);
    
    
    c.print();
    
    return 0;
}

