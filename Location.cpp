#include "Location.h"

using namespace std;

Location::Location(LocationType _type){
  this->type = _type;
  this->venue = decideVenue(type);
}

LocationType Location::getLocation(){
  return this->type;
}

string Location::getVenue(){
  return this->venue;
}

string Location::decideVenue(LocationType l){
  srand (time(NULL));
  if(l==NONEUROPEAN){
    string[] list = new string[]{"Algarve International Circuit","Autodromo Internazionale Enzo e Dino Ferrari","Autodromo Nazionale Monza","Circuit de Barcelona-Catalunya","Circuit de Spa-Francorchamps","Red Bull Ring","Silverstone"};
    return list[rand() % 7];
  }
  else{
    string[] list = new string[]{"Bahrain International Circuit","Istanbul Park","Yas Marina Circuit"};
    return list[rand() % 3];
  }
}
