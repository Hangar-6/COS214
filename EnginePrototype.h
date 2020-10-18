//
// Created by Luca Azmanov, u19004185
//

#ifndef COS214_ENGINEPROTOTYPE_H
#define COS214_ENGINEPROTOTYPE_H

#include "RacecarPrototype.h"

class EnginePrototype {
public:
  //Constructor
  WingsPrototype(RacecarDecorator*);

  //Virtual Functions Implementation
  RacecarPrototype* clone(); //Returns prototype
  void printReport(); //Prints report of changes
};


#endif //COS214_ENGINEPROTOTYPE_H
