#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "Builder.h"
#include "BaseCar.h"

class CarBuilder : public Builder {
    private:
        Car* car;

    public:
        ~CarBuilder();
        void build();
        Car* getCar();
};

#endif