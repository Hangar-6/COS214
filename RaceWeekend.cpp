#include "RaceWeekend.h"

using namespace std;

RaceWeekend::RaceWeekend(Location* _location){
  this->location = _location;
  this->race = new Race();
  this->practice = new Practice();
  this->qualifying = new Qualifying();
}

RaceWeekend::~RaceWeekend(){}

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
      defualt: total+=0;
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
      defualt: total+=0;
              break;
    }
    return total;
}

void RaceWeekend::runSessions(Team* team){
    //Example output for start of race weekend
    cout << "Welcome to FORMULA 1 Grand Prix where " << team->getTeamName() << " will be racing, along with others, " <<
    "here at " location->getVenue() << endl;

    bool pole1 = false;     //pole for car 1 - true if pole position, else false
    bool pole2 = false;     //pole for car 2 - true if pole position, else false
    string practice1 = "";    // car1 - 'good' if good practice, else 'bad'
    string practice2 = "";    // car2 - 'good' if good practice, else 'bad'

    /*
    1. Practice
    idea: practice will decide whether each car had a good or bad practice.
    A car with value 0 or value 1 had a bad or good practice respectively.
    A bad practice would decrement whatever position each car gets in qualifyers.
    A good practice would increment.
    */
    FinishPosition p = practice->runSession(team);
    if(p.car1==1)
        practice1 = "good";
    else practice1 = "bad";
    if(p.car2==1)
        practice2 = "good";
    else practice2 = "bad";
    //Example output
    cout << team->getTeamName() << " have completed their practice laps with car 1 having " << practice1 <<
    " practice laps and car 2 having " << practice2 << "practice laps."

    /*
    2. Qualifyers
    idea: if a car finishes at pole position on qualifyers,
    whatever position it gets with the race, increment by 2 positions
    */
    FinishPosition q = qualifying->runSession(team);
    //check practices
    if(practice1=="good"){  //car1
        if(q.car1>1)
            q.car1++;
    }
    else{
        if(q.car1<10)
            q.car1--;
    }
    if(practice2=="good"){  //car2
        if(q.car2>1)
            q.car2++;
    }
    else{
        if(q.car2<10)
            q.car2--;
    }

    //check pole positions
    if(q.car1<4)
        pole1 = true;
    if(q.car2<4)
        pole2 = true;
    //Example output
    cout << "After completing the qualifying lap, car 1 finished at position " << q.car1 <<
    " and car 2 finshed at position " << q.car2 << endl;


    /*
    3. Race
    */
    FinishPosition r = race->runSession(team);
    //check for pole positions on qualifying
    if(pole1){    //car1
        if(r.car1>2)
            r.car1 = r.car1+2;
        else if(r.car1==2)
            r.car1 = r.car1+1;
    }
    if(pole2){    //car2
        if(r.car2>2)
            r.car2 = r.car2+2;
        else if(r.car1==2)
            r.car2 = r.car2+1;
    }
    //Example output
    cout << "With the final race completed, car 1 finished at position " << r.car1 <<
    " and car 2 finshed at position " << r.car2 << endl;
}
