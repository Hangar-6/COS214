#ifndef TESTINGBUILDER_H
#define TESTINGBUILDER_H

#include "Builder.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "PracticeTest.h"

class TestingBuilder : public Builder {
    private:
        Testing* testing;

    public:
        ~TestingBuilder();
        void build();
        Testing* getTesting();
};

#endif