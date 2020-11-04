#include "RaceWeekend.h"

using namespace std;

RaceWeekend::RaceWeekend(Location* _location, RecommendedStrategy _strategy) : location(_location), strategy(_strategy) {
	this->practice = new Practice();
	this->race = new Race();
	this->qualifying = new Qualifying();
}

RaceWeekend::~RaceWeekend() {
	delete race;
	delete qualifying;
	delete practice;
	delete location;
}

int RaceWeekend::determineDriverPoints(int position) {
	int total = 0;
	switch (position) {
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
		default: total+=0;
				break;
	}
	return total;
}

void RaceWeekend::runSessions(Team* team){
	//Example output for start of race weekend
	team->racePreparations(this);
	cout << "Welcome to FORMULA 1 Grand Prix where " << team->getTeamName() << " will be racing, along with others, " <<
	"here at " << location->getVenue() << endl;

	/*
	1. Practice
	idea: practice will decide whether each car had a good or bad practice.
	A car with value 0 or value 1 had a bad or good practice respectively.
	A bad practice would decrement whatever position each car gets in qualifyers.
	A good practice would increment.
	*/
	FinishPosition p = practice->runSession(team);
	//Example output
	cout <<"#####Practice#### \n"<< team->getTeamName() << " have completed their practice laps with car 1 finishing in position " << p.car1 <<
	" and car 2 finishing in position " << p.car2 << endl << endl;

	/*
	2. Qualifyers
	idea: if a car finishes at pole position on qualifyers,
	whatever position it gets with the race, increment by 2 positions
	*/
	FinishPosition q = qualifying->runSession(team);

	//Example output
	cout <<"#####Qualifyers#### \n"<< "After completing the qualifying lap, car 1 finished in position " << q.car1 <<
	" and car 2 finshed in position " << q.car2 << endl << endl;


	/*
	3. Race
	*/
	FinishPosition r = race->runSession(team);
	//check for pole positions on qualifying

	//Example output
	cout <<"#####Race#### \n"<< "Its lights out and away we go! \nWith the final race completed, car 1 finished in position " << r.car1 <<
	" and car 2 finshed in position " << r.car2 << endl << endl;

	//Finally, determine points for team and drivers
	int d1 = determineDriverPoints(r.car1);  //car1
	int d2 = determineDriverPoints(r.car2);  //car2
	team->addPoints(d1,d2);
	team->raceEnd();

	cout << "Season so far... \n" << team->getTeamName() <<" \t" << team->getTeamPoints() << " points\nCar 1 \t" << team->getCar1Points() << " points \nCar 2 \t" << team->getCar2Points() << " points" << endl;

	cout << "Thanks for joining us this weekend and we hope to see you next time!" << endl << endl;

}

Location* RaceWeekend::getLocation() {
	return location;
}

RecommendedStrategy RaceWeekend::getStrategy() {
	return strategy;
}
