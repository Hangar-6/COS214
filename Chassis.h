//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_CHASSIS_H
#define COS214_CHASSIS_H

#include "RacecarDecorator.h"

class Chassis : public RacecarDecorator {
public:
  const string type;
  int strength;

private:
  Chassis();

  //Unique Methods
  int getStrength();
  void setStrength();

  //Implementing virtual functions
  string getType();
};


#endif //COS214_CHASSIS_H
