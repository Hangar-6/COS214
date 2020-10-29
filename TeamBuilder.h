#ifndef TEAMBUILDER_H
#define TEAMBUILDER_H

#include "Builder.h"

class TeamBuilder : public Builder {
    public:
        Team* build(string name);
};

#endif