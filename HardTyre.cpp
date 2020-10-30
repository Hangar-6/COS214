#include "HardTyre.h"

using namespace std;

HardTyre::HardTyre() : Tyre() {
	durability = 30;
}

Tyre* HardTyre::clone(){
  	return new HardTyre();
}
