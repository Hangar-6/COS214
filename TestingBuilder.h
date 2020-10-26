#ifndef TESTINGBUILDER_H
#define TESTINGBUILDER_H

#include "Builder.h"
#include "Testing.h"

class TestingBuilder : public Builder {
    public:
        void build();
        Testing* getTesting();
};

#endif