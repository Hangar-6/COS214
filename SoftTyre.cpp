#include "SoftTyre.h"

using namespace std;

SoftTyre::SoftTyre() {
    durability = 10;
}

Tyre* SoftTyre::clone() {
    return new SoftTyre();
}
