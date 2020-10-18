//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_SHIP_H
#define COS214_SHIP_H
#include "Transport"

class Ship:Transport {
private:

public:
  Ship();
  string getType();
  void executeTransport();
};


#endif //COS214_SHIP_H
