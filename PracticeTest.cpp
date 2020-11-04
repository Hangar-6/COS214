#include "PracticeTest.h"

using namespace std;

PracticeTest::PracticeTest() : Testing() {}

void PracticeTest::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == PRACTICE) {
        int randomTest = rand() % 3;
        TestResult Result = static_cast<TestResult>(randomTest);
        vector<Component*> Components = engineering->getComponents();
        cout<<"Practice Test: Start..."<<endl;

        for (int i = 0; i < Components.size(); i++){
            ComponentType ComType = Components[i]->getType();
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
        cout<<"Practice Test: End"<<endl;
    }
        
    else if(next)
        next->test(engineering, type);
}
