#ifndef CARADAPTER_H
#define CARADAPTER_H

#include "Car.h"
#include "Equipment.h"

class CarAdapter : public Equipment {
    private:
        Car* car;
    
    public:
        CarAdapter();   // set equipment type to CAR
        Car* getCar();
};

#endif