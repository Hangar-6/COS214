//
// Created by Luca Azmanov, u19004185
//

#ifndef COS214_RACECARPROTOTYPE_H
#define COS214_RACECARPROTOTYPE_H

#include <string>
#include <iosteam>
#include "RacecarDecorator.h"
using namespace std;

class RacecarPrototype {

private:
  RacecarDecorator* proto; //Stores RacecarDecorator (i.e. engine, wings etc.)

public:
  //Constructor and Destructor
  RacecarPrototype();
  RacecarPrototype(RacecarDecorator*); //Overriden Constructor with RacecarDecorator component
  virtual ~RacecarPrototype();

  //Common Functions
  RacecarDecorator* getProto(); //Returns edited component
  void setProto(RacecarDecorator* proto); //Sets component

  //Virtual Functions
  virtual RacecarPrototype* clone()=0; //Returns prototype
  virtual void printReport()=0; //Prints report of changes
};


#endif //COS214_RACECARPROTOTYPE_H
