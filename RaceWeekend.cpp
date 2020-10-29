#include "RaceWeekend.h"

using namespace std;

RaceWeekend::RaceWeekend(Location* _location){
  this->location = _location;
  /*
  this->race = new Race();
  this->practice = new Practice();
  this->qualifying = new Qualifying();
  */
}

RaceWeekend::~RaceWeekend(){}

void RaceWeekend::enter(Team* team){

}

int RaceWeekend::determinePoints(FinishPosition positions){
    int total = 0;
    switch (positions.car1) {
      case 1: total+=25;
              break;
      case 2: total+=18;
              break;
      case 3: total+=15;
              break;
      case 4: total+=12;
              break;
      case 5: total+=10;
              break;
      case 6: total+=8;
              break;
      case 7: total+=6;
              break;
      case 8: total+=4;
              break;
      case 9: total+=2;
              break;
      case 10: total+=1;
              break;
      defualt: total+=25;
              break;
    }
    switch (positions.car2) {
      case 1: total+=25;
              break;
      case 2: total+=18;
              break;
      case 3: total+=15;
              break;
      case 4: total+=12;
              break;
      case 5: total+=10;
              break;
      case 6: total+=8;
              break;
      case 7: total+=6;
              break;
      case 8: total+=4;
              break;
      case 9: total+=2;
              break;
      case 10: total+=1;
              break;
      defualt: total+=25;
              break;
    }
    return total;
}

void RaceWeekend::runSessions(Team* team){
    FinishPosition p = practice->runSession(team);
    //Example output
    

    FinishPosition q = qualifying->runSession(team);
    //Example output
    cout << "After completing the qualifying lap, car 1 finished at position " << q.car1 <<
    " and car 2 finshed at position " << q.car2 << endl;

    FinishPosition r = race->runSession(team);
    //Example output
    cout << "With the final race completed, car 1 finished at position " << r.car1 <<
    " and car 2 finshed at position " << r.car2 << endl;
}
