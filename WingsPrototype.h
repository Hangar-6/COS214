//
// Created by Luca Azmanov, u19004185
//

#ifndef COS214_WINGSPROTOTYPE_H
#define COS214_WINGSPROTOTYPE_H

#include "RacecarPrototype.h"

class WingsPrototype {
public:
  //Constructor
  WingsPrototype(RacecarDecorator*);

  //Unique Functions
  void editWings();

  //Virtual Functions Implementation
  RacecarPrototype* clone(); //Returns prototype
  void printReport(); //Prints report of changes
};


#endif //COS214_WINGSPROTOTYPE_H
