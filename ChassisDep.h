//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_CHASSISDEP_H
#define COS214_CHASSISDEP_H
#include "Departments.h"

class ChassisDep :public Departments{
public:
    ChassisDep();
    virtual void produceComponent();
};


#endif //COS214_CHASSISDEP_H
