#ifndef HARDTYRE_H
#define HARDTYRE_H

#include "Tyre.h"

// Concrete Prototype class
// Hard Tyres offer the least grip and speed but have the highest durability

class HardTyre : public Tyre {
    public:
        HardTyre();
        Tyre* clone();
};

#endif