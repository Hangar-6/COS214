#include "Testing.h"
using namespace std;

Testing::~Testing() {
    if(next)
        delete next;
    next = nullptr;
}

void Testing::addNext(Testing* NextTester) {
    if(next)
        next->addNext(NextTester);
    else
        next = NextTester;
}

void Testing::notify(Engineering* engineering, TestResult result, ComponentType component) {
    engineering->upgrade(result, component);
}