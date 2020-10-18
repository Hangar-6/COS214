//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_DEPARTMENTS_H
#define COS214_DEPARTMENTS_H
#include "RacecarPrototype.h"

class Departments {
private:
    RacecarPrototype* ProducedPrototype;
public:
    Departments();
    virtual ~Departments();
    virtual RacecarPrototype* produceComponent() = 0;
    RacecarPrototype* NextComponent();
    //Discuss with group memebers on what other functions to add
};


#endif //COS214_DEPARTMENTS_H
