#ifndef LOCATION_H
#define LOCATION_H

using namespace std;

#include <string>
#include <stdlib.h>
#include <time.h>

enum LocationType {EUROPEAN, NONEUROPEAN};

class Location {
    private:
        string venue;
        LocationType type;

    public:
        Location(LocationType _type);
        LocationType getLocation();
        string decideVenue();//randomiser for venue selection
        string getVenue();
};

#endif
