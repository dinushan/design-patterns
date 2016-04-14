#pragma once
#include <string>
#include "cocktail.h"
#include "liquor.h"
#include <iostream>
using namespace std;
namespace DecoratorPattern{
class Rum: public Liquor{
	public:
		Rum(Cocktail* cocktail, unsigned short qty):Liquor(cocktail,qty){}
		~Rum(){}
		string getDescription(){
			return cocktail->getDescription() + " , " + to_string(quantity_ml) + "ml Rum";
		}
		double content(){
			double curAlcML = (cocktail->content() * cocktail->quantity()) / 100;
			double newAlcML = 0.345 * quantity_ml;
			double totalAlcML = curAlcML + newAlcML;
			double totalLiq = quantity_ml + cocktail->quantity();
			return (totalAlcML / totalLiq) * 100;
		}
};
}
