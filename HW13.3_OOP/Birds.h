#pragma once
#include "Animal.h"

namespace Birds
{
    class Eagle : public Animal {
    public:
        void makeSound() const override {
            cout << "Орел: Крик орла!" << endl;
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
