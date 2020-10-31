#include "Testing.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

Testing::Testing() : next(nullptr) {}

Testing::~Testing() {}

void Testing::addNext(Testing *NextTester) {
    if(next)
        next->addNext(NextTester);
    else
        next = NextTester;
}

void Testing::notify(Engineering* engineering, TestResult result, ComponentType component) {
    engineering->upgrade(result, component);
}