#ifndef BUILDER_H
#define BUILDER_H

#include "Team.h"

class Builder {
    public:
        virtual ~Builder();
        virtual Team* build(string name) = 0;
};

#endif