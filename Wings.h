//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_WINGS_H
#define COS214_WINGS_H

#include "RacecarDecorator.h"

class Wings : public RacecarDecorator {
public:
  const string type;
  int airResistance;

private:
  Wings();

  //Unique Methods
  int getAirResistance();
  void setAirResistance(int airResistance);

  //Implementing virtual functions
  string getType();
};


#endif //COS214_WINGS_H
