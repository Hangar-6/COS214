#include "Practice.h"

using namespace std;

FinishPosition Practice::runSession(Team* team){
  FinishPosition f;
  //randomly pick between 0 and 1 for each car
    srand (time(NULL));
    f.car1 = rand() % 2;
    f.car2 = rand() % 2;

    return f;
}
