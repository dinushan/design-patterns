#pragma once
#include "decorator.h"
#include <string>
using namespace std;
namespace DecoratorPattern{
class Cocktail{
	protected:
		string description;
	public:
		virtual string getDescription(){return description;}
		virtual double content() = 0;
		virtual unsigned short quantity() = 0;
		virtual ~Cocktail(){}
};
}
