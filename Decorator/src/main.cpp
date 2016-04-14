#include "decorator.h"
#include <iostream>
using namespace std;
using namespace DecoratorPattern;

int main(int argc, char** argv){
	cout.setf(ios::showpoint);
	cout.precision(2);	

	cout << "---------Making experimental cocktail----------\n";
	Cocktail* cocktail = new XPCocktail();
	cout << cocktail->getDescription() << " = [ " <<  cocktail->quantity() << " ] ml : " << cocktail->content() << "% v/v \n";
	delete cocktail;

	cout << "\n----------Making another with \"decorations\"---------\n";
	
	Cocktail* cocktail2 = new XPCocktail();
	cout << "\t" << cocktail2->getDescription() << " =  [ " <<  cocktail2->quantity() << " ] ml : " << cocktail2->content() << "% v/v \n";

	cout << "add 50ml rum\n";
	cocktail2 = new Rum(cocktail2,50);
	cout << "\t" << cocktail2->getDescription() << " =  [ " <<  cocktail2->quantity() << " ] ml : " << cocktail2->content() << "% v/v \n";
	
	cout << "now add 80ml vodka\n";
	cocktail2 = new Vodka(cocktail2,80);
	cout << "\t" << cocktail2->getDescription() << " =  [ " <<  cocktail2->quantity() << " ] ml : " << cocktail2->content() << "% v/v \n";

	delete cocktail2;
	return 0;
}
