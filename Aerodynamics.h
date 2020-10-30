#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include "Component.h"

class Aerodynamics : public Component {
    public:
        Aerodynamics(BaseCar* car, int _performance);
        void add(Car* component);
        Car* clone();
};  

#endif