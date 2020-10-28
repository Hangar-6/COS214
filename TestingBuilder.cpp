#include "TestingBuilder.h"

TestingBuilder::~TestingBuilder() {
    testing = nullptr;
}

void TestingBuilder::build() {
    // testing = new WindTunnel();
}

Testing* TestingBuilder::getTesting() {
    return testing;
}