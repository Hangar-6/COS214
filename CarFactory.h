//
// Created by user-pc on 2020/10/18.
//

#ifndef COS214_CARFACTORY_H
#define COS214_CARFACTORY_H
#include "Car.h"

class CarFactory {
private:
  Car* myCar;

public:
virtual Car* CreateCar()=0;
};


#endif //COS214_CARFACTORY_H
