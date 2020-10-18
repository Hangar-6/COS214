//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_TYRES_H
#define COS214_TYRES_H

#include "RacecarDecorator.h"

class Tyres : public RacecarDecorator {
public:
  const string type;
  int wear;

private:
  Tyres();

  //Unique Methods
  int getWear();
  void setWear();

  //Implementing virtual functions
  string getType();
};


#endif //COS214_TYRES_H
