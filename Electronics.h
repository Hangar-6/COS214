//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_ELECTRONICS_H
#define COS214_ELECTRONICS_H

#include "RacecarDecorator.h"

class Electronics : public RacecarDecorator {
public:
  const string type;
  int reliability;

private:
  Electronics();

  //Unique Methods
  int getReliability();
  void setReliability();

  //Implementing virtual functions
  string getType();
};


#endif //COS214_ELECTRONICS_H
