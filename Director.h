#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Team.h"
#include "TeamBuilder.h"

class Director {
    public:
        Team* buildTeam(string name);
};

#endif