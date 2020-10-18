//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_STRATERGIST_H
#define COS214_STRATERGIST_H
#include "TyreStrategy.h"

class Stratergist {
private:
    TyreStrategy* strategy;
public:
    Stratergist();
    ~Stratergist();
    void DecideStrat();
};


#endif //COS214_STRATERGIST_H
