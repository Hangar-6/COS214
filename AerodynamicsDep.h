//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_AERODYNAMICSDEP_H
#define COS214_AERODYNAMICSDEP_H
#include "Departments.h"

class AerodynamicsDep : public Departments{
public:
    AerodynamicsDep();
    virtual RacecarPrototype* produceComponent();
};


#endif //COS214_AERODYNAMICSDEP_H
