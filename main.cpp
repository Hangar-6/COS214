#include "RaceWeekend.h"
#include "Location.h"
#include "Director.h"

#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
    /*** INSTANTIATION ***/

    // RACE WEEKEND
    string venues[] = {"Netherlands","Spain","Monaco","France","Austria","Great Britain","Hungary","Belguim","Italy","Austrailia","Bahrain","Vietnam","China","Azerbaijan","Canada","Singapore","Russia","Japan","United States","Mexico","Brazil","Abu Dhabi"};

    RecommendedStrategy RecommendedStrategyArray[] = {AGGRESSIVE, AGGRESSIVE, CONSERVATIVE,BALANCED, BALANCED, CONSERVATIVE, AGGRESSIVE, BALANCED , CONSERVATIVE, BALANCED, AGGRESSIVE, BALANCED, CONSERVATIVE, BALANCED, CONSERVATIVE, AGGRESSIVE, CONSERVATIVE, AGGRESSIVE, AGGRESSIVE, CONSERVATIVE, BALANCED, BALANCED };
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

    /*** RACING ***/

    cout<<"Welcome to the 2020 Formula One Championship."<<endl;
    cout<<"The championship will require all teams to perform the following procedures before racing:"<<endl;
    cout<<"1. All teams should test and validate all components before transporting them to the race weekend's location."<<endl;
    cout<<"2. All teams must either transport their equipment by truck (European race weekend) or ship (non-european race weekend)."<<endl;
    cout<<"3. All race cars are to be transported by plane."<<endl<<endl;
    cout<<"Once all procedures have been completed, may a team participate in a race weekend."<<endl;
    cout<<"Good luck to all racers!"<<endl<<endl;

    //ADD TO INTRO MESSAGE

    for (int i = 0; i < 22; i++) {
        /*** TEST COMPONENTS ***/
        cout<<"Testing Components "<<"---------------------------------------------"<<endl<<endl;
        team->test();

        cout<<endl<<endl<<endl;

        /*** TRANSPORT TO RACEWEEKND ***/
        cout<<"Transporting Equipment "<<"---------------------------------------------"<<endl<<endl;
        team->transport(races[i]);
        cout<<endl<<endl<<endl;

        /*** START RACING ***/
        cout<<"Race Weekend: "<<(i+1)<<" ---------------------------------------------"<<endl<<endl;
        races[i]->runSessions(team);
        team->transport(nullptr);
        cout<<endl<<endl<<endl;
    }

    //OUTPUT SEASON RESULTS
    team->seasonEnd();

    for(int i = 0; i < 22; i++) {
      delete races[i];
    }
    delete[] races;

    delete team;
    delete director;
}
