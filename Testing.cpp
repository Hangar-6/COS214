#include "Testing.h"
#include <iostream>

using namespace std;

Testing::Testing() {
    next = nullptr;
    if (TestType == 0)
        cout<<"Test type: Wind Tunnel."<<endl;
    else if (TestType == 1)
        cout<<"Test type: Simulation."<<endl;
    else if (TestType == 2)
        cout<<"Test type: Practice Test."<<endl;
}

void Testing::addNext(Testing *NextTester) {
    if (next)
        next->addNext(NextTester);
    else
        next = NextTester;
}

void Testing::notify(Engineering* engineering, TestResult result){
    engineering->upgrade(result);
}