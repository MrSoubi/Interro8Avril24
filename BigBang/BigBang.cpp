#include "BigBang.h"

void GenerateUnivers() {
    for (int i = 0; i < 100; i++) {
        solarSystems.push_back(make_unique<SolarSystem>());
    }
}

//void DisplayUnivers() {
//    for (auto it = systems.begin(); it != systems.end(); it++) {
//        it->get()->Display();
//        cout << endl;
//    }
//}


int main()
{
    srand(time(NULL));

    GenerateUnivers();

    //DisplayUnivers();

    //DeleteUnivers();
}