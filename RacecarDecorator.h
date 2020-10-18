//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_RACECARDECORATOR_H
#define COS214_RACECARDECORATOR_H

#include "Car.h"

class RacecarDecorator : public Car {
private:
  RacecarDecorator();
  virtual ~RacecarDecorator();

  //Implementing virtual functions
  string getType();
};


#endif //COS214_RACECARDECORATOR_H
