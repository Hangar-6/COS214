#ifndef MEDIUMTYRE_H
#define MEDIUMTYRE_H

#include "Tyre.h"

// Concrete Prototype class
// Medium Tyres offer the a balance between grip, speed and durability

class MediumTyre : public Tyre {
    public:
        MediumTyre();
        Tyre* clone();
};

#endif