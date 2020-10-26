#ifndef SOFTTYRE_H
#define SOFTTYRE_H

#include "Tyre.h"

// Concrete Prototype class
// Soft Tyres offer the most grip and speed but have the lowest durability

class SoftTyre : public Tyre {
    public:
        SoftTyre();
        Tyre* clone();
};

#endif