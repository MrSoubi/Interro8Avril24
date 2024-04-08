// BigBang.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "GlobalHeader.h"

using namespace std;

list<unique_ptr<Planet>> univers;

void GenerateUnivers() {
    for (int i = 0; i < 100; i++) {
        univers.push_back(make_unique<Planet>());
    }
}

void DisplayUnivers() {
    for (auto it = univers.begin(); it != univers.end(); it++) {
        it->get()->Display();
        cout << endl;
    }
}

void DeleteUnivers() {
    univers.clear();
}

int main()
{
    srand(time(NULL));

    GenerateUnivers();

    DisplayUnivers();

    DeleteUnivers();
}