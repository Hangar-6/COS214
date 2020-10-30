#include "WindTunnel.h"

using namespace std;

WindTunnel::WindTunnel() : Testing() {}

void WindTunnel::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult
    // decrement Engineering' windTunnelRuns after every test

    if(type == WINDTUNNEL) {
        TestResult result;
        result = NOCHANGE;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Wind Tunnel Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            if (Components.at(i)==Aerodynamics){
                cout<<"Wind Tunnel Test: Aerodynamics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Wind Tunnel Test: Aerodynamics failed..."<<endl;
                }
                else
                    cout<<"Wind Tunnel Test: Aerodynamics passed..."<<endl;
            }
            if (Components.at(i)==Electronics){
                cout<<"Wind Tunnel Test: Electronics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Wind Tunnel Test: Electronics failed..."<<endl;
                }
                else
                    cout<<"Wind Tunnel Test: Electronics passed..."<<endl;
            }
            if (Components.at(i)==Engine){
                cout<<"Wind Tunnel Test: Engine testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Wind Tunnel Test: Engine failed..."<<endl;
                }
                cout<<"Wind Tunnel Test: Engine passed..."<<endl;
            }
            if (Components.at(i)==Chassis){
                cout<<"Wind Tunnel Test: Chassis testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Wind Tunnel Test: Chassis failed..."<<endl;
                }
                else
                    cout<<"Wind Tunnel Test: Chassis passed..."<<endl;
            }
        }
        cout<<"Wind Tunnel Test: End"<<endl;
        notify(engineering, result);
    }
        
    else if(next) 
        next->test(engineering, type);
}