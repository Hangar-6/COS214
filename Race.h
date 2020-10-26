#ifndef RACE_H
#define RACE_H

#include "RaceSession.h"

class Race : public RaceSession {
    public:
        int runSession(Session session);
};

#endif