#pragma once
#include "cocktail.h"
#include "liquor.h"
#include <string>
using namespace std;
namespace DecoratorPattern{
class Vodka: public Liquor{
	public:
		Vodka(Cocktail* cocktail, unsigned short qty):Liquor(cocktail,qty){}
		~Vodka(){}
		string getDescription(){
			return cocktail->getDescription() + " , " + to_string(quantity_ml) + "ml Vodka";
		}
		double content(){
			double curAlcML = (cocktail->content() * cocktail->quantity()) / 100;
			double newAlcML = 0.40 * quantity_ml;
			double totalAlcML = curAlcML + newAlcML;
			double totalLiq = quantity_ml + cocktail->quantity();
			return (totalAlcML / totalLiq) * 100;
		}
};
}
