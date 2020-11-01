#ifndef PRACTICE_H
#define PRACTICE_H

#include "RaceSession.h"

class Practice : public RaceSession {
    public:
        FinishPosition runSession(Team* team);    // simulate running of session by running a PracticeTest
};

#endif
