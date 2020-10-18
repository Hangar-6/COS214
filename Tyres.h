//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_TYRES_H
#define COS214_TYRES_H

#include "RacecarDecorator.h"
#include "TyreType.h"

class Tyres : public RacecarDecorator {
public:
  int durability;

private:
  Tyres();

  //Unique Methods
  int getDurability();
  void setDurability(int durability);

  //Implementing virtual functions
  virtual string getType()=0;
};


#endif //COS214_TYRES_H
