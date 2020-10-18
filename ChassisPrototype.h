//
// Created by Luca Azmanov, u19004185
//

#ifndef COS214_CHASSISPROTOTYPE_H
#define COS214_CHASSISPROTOTYPE_H

#include "RacecarPrototype.h"

class ChassisPrototype {
public:
  //Constructor
  ChassisPrototype(RacecarDecorator*);

  //Virtual Functions Implementation
  RacecarPrototype* clone(); //Returns prototype
  void printReport(); //Prints report of changes
};


#endif //COS214_CHASSISPROTOTYPE_H
