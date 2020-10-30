#ifndef COMPONENT_H
#define COMPONENT_H

#include "Car.h"

class Component : public Car {
    protected:
        Car* baseCar;
        int maxPerformance;
        
    public:
        Component();
        Component(Car* _baseCar);
        virtual ~Component();
        virtual void add(Car* component) = 0;
        virtual Car* clone() = 0;
        void setPerformance(int perf);
        int getPerformance();
        int getMaxPerformance();
};

#endif