#include "RaceWeekend.h"
#include "Location.h"
#include "Director.h"

#include <iostream>
using namespace std;

int main() {
    /*** INSTANTIATION ***/

    // RACE WEEKEND
    string venues[] = {"Netherlands","Spain","Monaco","France","Austria","Great Britain","Hungary","Belguim","Italy","Austrailia","Bahrain","Vietnam","China","Azerbaijan","Canada","Singapore","Russia","Japan","United States","Mexico","Brazil","Abu Dhabi"};

    RecommendedStrategy RecommendedStrategyArray[] = {AGGRESSIVE, AGGRESSIVE, CONSERVATIVE,BALANCED, BALANCED, CONSERVATIVE, AGGRESSIVE, BALANCED , CONSERVATIVE, BALANCED, AGGRESSIVE, BALANCED, CONSERVATIVE, BALANCED, CONSERVATIVE, AGGRESSIVE, CONSERVATIVE, AGGRESSIVE, AGGRESSIVE, CONSERVATIVE, BALANCED };
    RaceWeekend** races = new RaceWeekend*[22];

    for (int i = 0; i < 22; i++) { //Set venues
		if(i<9){
        	races[i] = new RaceWeekend(new Location(EUROPEAN, venues[i]), RecommendedStrategyArray[i]);
        }else{
            races[i] = new RaceWeekend(new Location(NONEUROPEAN, venues[i]), RecommendedStrategyArray[i]);
          	}
    }

      /*** CREATION ***/

      //DIRECTOR
    Director* director = new Director();
  	Team* team = director->buildTeam("Hangar-6");
    RaceWeekend* race = new RaceWeekend(new Location(EUROPEAN, "Monaco"), AGGRESSIVE);
    team->transport(race);
    team->test();

    /*** RACING ***/

    for (int i = 0; i < 22; i++) {
        /*** TEST COMPONENTS ***/
        team->test();

        /*** STORE COMPONENTS ***/

        /*** TRANSPORT TO RACEWEEKND ***/
          team->transport(races[i]);

        /*** START RACING ***/
        races[i]->runSessions(team);
    }

    delete team;
    delete director;
}
