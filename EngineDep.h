//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_ENGINEDEP_H
#define COS214_ENGINEDEP_H
#include "Departments.h"

class EngineDep : public Departments{
public:
    EngineDep();
    virtual RacecarPrototype* produceComponent();
};


#endif //COS214_ENGINEDEP_H
