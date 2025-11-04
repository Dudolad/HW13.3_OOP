#pragma once
#include "Animal.h"

namespace Birds
{
    class Dog : public Animal {
    public:
        void makeSound() const override {
            cout << "Собака: Гав-гав!" << endl;
        }
    };
    
    namespace Domestic
    {
        class Chicken : public Animal {
        public:
            void makeSound() const override {
                cout << "Курка: Кудкудах!" << endl;
            }
        };
    }
}
