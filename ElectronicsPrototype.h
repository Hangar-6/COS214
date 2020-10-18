//
// Created by Luca Azmanov, u19004185
//

#ifndef COS214_ELECTRONICSPROTOTYPE_H
#define COS214_ELECTRONICSPROTOTYPE_H

#include "RacecarPrototype.h"

class ElectronicsPrototype {
public:

private:
  //Constructor
  ElectronicsPrototype(RacecarDecorator*);

  //Virtual Functions Implementation
  RacecarPrototype* clone(); //Returns prototype
  void printReport(); //Prints report of changes
};


#endif //COS214_ELECTRONICSPROTOTYPE_H
