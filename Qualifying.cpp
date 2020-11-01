#include "Qualifying.h"

using namespace std;

FinishPosition Qualifying::runSession(Team* team){
  FinishPosition f;
  //randomly pick positions for each car. do while is to ensure both cars have diff positions
  do {
    srand (time(NULL));
    f.car1 = rand() % 20 + 1;
    f.car2 = rand() % 20 + 1;
  } while(f.car1==f.car2);
  return f;
}
