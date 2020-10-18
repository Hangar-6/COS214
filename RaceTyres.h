#ifndef RACETYRES_H
#define RACETYRES_H
#include <string>

using namespace std;

class RaceTyres{

private:
    string* Tyres; //Not sure, check with group
    string Type;      //store all 5 tyres or just one set at a time??
public:
    RaceTyres();    //Maybe add TyreLimit N for dynamic size ????
    string* getTyres();
    void setTyres(string* NewSet);          //Remove all gets and sets since we have iterator?
    string getTyre(int index);
    void setTyre(int index, string NewT);
};

#endif
