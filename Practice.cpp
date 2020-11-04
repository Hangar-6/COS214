#include "Practice.h"
#include "Team.h"

using namespace std;

FinishPosition Practice::runSession(Team* team){
  FinishPosition f;
  team->test(PRACTICE, team->getEngineers().current);
  //randomly pick between 0 and 1 for each car
    do {
    f.car1 = rand() % 20 + 1;
    f.car2 = rand() % 20 + 1;
  } while(f.car1==f.car2);
  return f;
}
