#include "MediumTyre.h"

using namespace std;

MediumTyre::MediumTyre() : Tyre() {
  	durability = 20;
}

Tyre* MediumTyre::clone() {
	return new MediumTyre();
}
