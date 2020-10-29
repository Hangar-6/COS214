#include "SoftTyre.h"

using namespace std;

SoftTyre::SoftTyre(){
  setDurability(10);
}

Tyre* SoftTyre::clone(){
  Tyre* t = new SoftTyre();
  return t;
}
