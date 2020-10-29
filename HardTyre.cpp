#include "HardTyre.h"

using namespace std;

HardTyre::HardTyre(){
  setDurability(30);
}

Tyre* HardTyre::clone(){
  Tyre* t = new HardTyre();
  return t;
}
