#ifndef BASECAR_H
#define BASECAR_H

#include "Car.h"
#include "Tyre.h"
#include <vector>

class BaseCar : public Car {
    private:
        vector<Car*> components;
        vector<Tyre*> tyres;
    
    public:
        BaseCar();
        virtual ~BaseCar();
        void add(Car* component);
        Car* clone();
        void setTyres(vector<Tyre*> _tyres);
        void setComponents(vector<Car*> _components);
        void clearComponents();
};

#endif