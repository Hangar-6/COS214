#ifndef STRATEGISTBUILDER_H
#define STRATEGISTBUILDER_H

#include "Builder.h"
#include "Strategist.h"

class StrategistBuilder : public Builder {
    public:
        void build();
        Strategist* getStrategist();
};

#endif