#ifndef LOCATION_H  
#define LOCATION_H

using namespace std;

#include <string>

enum LocationType {EUROPEAN, NONEUROPEAN};

class Location {
    private:
        string venue;
        LocationType type;

    public:
        Location(string _venue, LocationType _type);
        LocationType getLocation();
        string getVenue();
};

#endif