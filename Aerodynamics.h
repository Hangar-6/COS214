#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include "Component.h"

class Aerodynamics : public Component {
    public:
        Aerodynamics(int _performance = 0);
        void add(Car* component);
        Car* clone();
        ComponentType getType();
};  

#endif