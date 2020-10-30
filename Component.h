#ifndef COMPONENT_H
#define COMPONENT_H

#include "Car.h"

enum ComponentType {AERODYNAMICS, CHASSIS, ELECTRONICS, ENGINE};

class Component : public Car {
    protected:
        Car* baseCar;
        
    public:
        Component(int perf = 0);        // set performance in constructor, default 0
        virtual ~Component();
        virtual void add(Car* component) = 0;
        virtual Car* clone() = 0;
        void setPerformance(int perf);
        int getPerformance();
        void setBaseCar(Car* car);
        virtual ComponentType getType() = 0;
};

#endif