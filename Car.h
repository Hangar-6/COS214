//
// Created by user-pc on 2020/10/18.
//

// This is to show Msi how atom works...
#ifndef COS214_CAR_H
#define COS214_CAR_H
#include "RacecarDecorator.h"
#include <string>

class Car {
  private:
    RacecarDecorator **myDecorators;
    std::string name;

  public:
    Car(std::string name);
    void add(Car*);
    std::string getName();
    virtual std::string getType()=0;

};


#endif //COS214_CAR_H
