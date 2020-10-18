//
// Created by jacki on 2020/10/17.
//

#ifndef COS214_RACECARFACTORY_H
#define COS214_RACECARFACTORY_H
#include "Car.h"
#include "CarFactory.h"

class RacecarFactory:public CarFactory {

    public:
      Car* CreateCar();
};


#endif //COS214_RACECARFACTORY_H
