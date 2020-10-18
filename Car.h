//
// Created by user-pc on 2020/10/18.
//

#ifndef COS214_CAR_H
#define COS214_CAR_H
#include "RacecarDecorator"

class Car {
  private:
    RacecarDecorator **myDecorators;
    string name;

  public:
    Car(string name);
    void add(Car*);
    string getName();
    virtual string getType()=0;

};


#endif //COS214_CAR_H
