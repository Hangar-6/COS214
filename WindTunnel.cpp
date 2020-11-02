#include "WindTunnel.h"

using namespace std;

WindTunnel::~WindTunnel() {}

void WindTunnel::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult
    // decrement Engineering' windTunnelRuns after every test

    if(type == WINDTUNNEL && engineering->getWindTunnelRuns() > 0) {
        srand(time(0));
        int randomTest = rand() % 3;
        TestResult Result = static_cast<TestResult>(randomTest);
        vector<Component*> Components = engineering->getComponents();
        cout<<"Wind Tunnel Test: Start..."<<endl;

        vector<Component*>::iterator it;
        for (it = Components.begin(); it != Components.end(); ++it){
            ComponentType ComType = (*it)->getType();
            switch (ComType){
                case AERODYNAMICS:
                    notify(engineering, Result, AERODYNAMICS);
                    break;
                case CHASSIS:
                    notify(engineering, Result, CHASSIS);
                    break;
                case ELECTRONICS:
                    notify(engineering, Result, ELECTRONICS);
                    break;
                case ENGINE:
                    notify(engineering, Result, ENGINE);
                    break;
                default:
                    break;
            }
        }
        cout<< "All parts tested\n";
        cout<<"Wind Tunnel Test: End"<<endl;
        engineering->setWindTunnelRuns((engineering->getWindTunnelRuns()-1));
    }
        
    else if(next) 
        next->test(engineering, type);
}