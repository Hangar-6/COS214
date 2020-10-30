#include "Location.h"

using namespace std;

Location::Location(LocationType _type, string _venue) {
	this->type = _type;
	this->venue = _venue;
}

LocationType Location::getLocation() {
	return this->type;
}

string Location::getVenue() {
	return this->venue;
}
