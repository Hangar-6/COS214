#ifndef ENGINEERINGBUILDER_H
#define ENGINEERINGBUILDER_H

#include "Builder.h"
#include "CurrentEngineering.h"
#include "NextEngineering.h"

class EngineeringBuilder : public Builder {
    public:
        void build();
        Engineering* getEngineering();
};

#endif