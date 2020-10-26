#ifndef BASECAR_H
#define BASECAR_H

#include "Car.h"
#include "Component.h"
#include "Tyre.h"
#include <vector>

class BaseCar : public Car {
    private:
        vector<Component*> components;
        vector<Tyre*> tyres;
    
    public:
        BaseCar();
        void add(Car* component);
        Car* clone();
};

#endif