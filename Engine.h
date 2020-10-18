//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_ENGINE_H
#define COS214_ENGINE_H

#include "RacecarDecorator.h"

class Engine : public RacecarDecorator {
public:
  const string type;
  int power;

private:
  Engine();

  //Unique Methods
  int getPower();
  void setPower();

  //Implementing virtual functions
  string getType();
};


#endif //COS214_ENGINE_H
