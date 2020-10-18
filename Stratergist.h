//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_STRATERGIST_H
#define COS214_STRATERGIST_H
#include "TyreStrategy.h"
#include "RaceWeekend.h"

class Stratergist {
private:
    TyreStrategy* strategy;
public:
    Stratergist();
    ~Stratergist();
    void DecideStrat(RaceWeekend* RW);
};


#endif //COS214_STRATERGIST_H
