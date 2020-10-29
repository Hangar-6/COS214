#include "MediumTyre.h"

using namespace std;

MediumTyre::MediumTyre(){
  setDurability(20);
}

Tyre* MediumTyre::clone(){
  Tyre* t = new MediumTyre();
  return t;
}
