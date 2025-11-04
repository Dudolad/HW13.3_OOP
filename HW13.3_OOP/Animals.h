#pragma once
#include "Animal.h"

namespace Animals
{
	class Tiger
		: public Animal
	{
	public:
		void makeSound() const override
		{
			cout << "Ëåâ: Ðððð!" << endl;
		}
	};

	namespace Wild
	{
		class Wolf : public Animal {
		public:
			void makeSound() const override {
				cout << "Âîâê: Àóóó!" << endl;
			}
		};
	}
}
