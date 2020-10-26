#ifndef PRACTICE_H
#define PRACTICE_H

#include "RaceSession.h"

class Practice : public RaceSession {
    public:
        int runSession(Session session);
};

#endif