//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_ELECTRONICSDEP_H
#define COS214_ELECTRONICSDEP_H
#include "Departments.h"

class ElectronicsDep : public Departments{
public:
    ElectronicsDep();
    virtual RacecarPrototype* produceComponent();
};


#endif //COS214_ELECTRONICSDEP_H
