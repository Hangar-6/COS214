#ifndef CARADAPTER_H
#define CARADAPTER_H

#include "Car.h"
#include "Equipment.h"

class CarAdapter : public Equipment {
    private:
        Car* car;
    
    public:
        CarAdapter(Car * passedInCar);   // set equipment type to CAR
        Car* getCar();
        virtual EquipmentType getType();
};

#endif