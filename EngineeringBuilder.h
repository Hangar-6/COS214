#ifndef ENGINEERINGBUILDER_H
#define ENGINEERINGBUILDER_H

#include "Builder.h"
#include "CurrentEngineering.h"
#include "NextEngineering.h"

enum EngineeringType {CURRENT, NEXT};

class EngineeringBuilder : public Builder {
    private:
        Engineering* current;
        Engineering* next;

    public:
        ~EngineeringBuilder();
        void build();
        Engineering* getEngineering(EngineeringType type);
};

#endif