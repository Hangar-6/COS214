//
// Created by jacki on 2020/10/17.
//

#ifndef COS214_F1RACESRESULTS_H
#define COS214_F1RACESRESULTS_H

#include "Scoresheet.h"

class F1RacesResults {
    private:
        Scoresheet* scoresheet;

    public:
        F1RacesResults(Scoresheet* sheet);
        void notify(int result);
};


#endif //COS214_F1RACESRESULTS_H
