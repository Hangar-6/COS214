//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_TYRES_H
#define COS214_TYRES_H

#include "RacecarDecorator.h"
#include "TyreType.h"

class Tyres : public RacecarDecorator {
public:
  int wear;

private:
  Tyres();

  //Unique Methods
  int getWear();
  void setWear();

  //Implementing virtual functions
  virtual string getType()=0;
};


#endif //COS214_TYRES_H
