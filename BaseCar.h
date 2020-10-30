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
        int componentCount;
    
    public:
        BaseCar();
        virtual ~BaseCar();
        void add(Car* component);
        Car* clone();
        void setTyres(vector<Tyre*> _tyres);
};

#endif