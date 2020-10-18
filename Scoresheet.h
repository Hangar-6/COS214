//
// Created by jacki on 2020/10/17.
//

#ifndef COS214_SCORESHEET_H
#define COS214_SCORESHEET_H

#include "F1RacesResults.h"

class Scoresheet {
    private:
        int ConstructorPoints;
        F1RacesResults* results;
    public:
        Scoresheet();
        Scoresheet(F1RacesResults* results);
        void update(int points);
        void setRaceResults(F1RacesResults* _results);      // register with subject
};

#endif //COS214_SCORESHEET_H
