#include <iostream>
#include "Animals.h"
#include "Birds.h"
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    vector<Animal*> zoo;

    zoo.push_back(new Animals::Tiger);
    zoo.push_back(new Animals::Wild::Wolf);
    zoo.push_back(new Birds::Eagle);
    zoo.push_back(new  Birds::Domestic::Chicken);

    cout << "Звук зоопарку:" << endl;
    for (auto animal : zoo) {
        animal->makeSound();
    }

    for (auto animal : zoo) {
        delete animal;
    }


    return 0;
}


