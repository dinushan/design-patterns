#pragma once
#include "cocktail.h"
namespace DecoratorPattern{
class XPCocktail: public Cocktail{
	public:
		XPCocktail(){
			description = "Experimental cocktail";
		}
		virtual double content(){
			return 0.0;	
		}
		virtual unsigned short quantity(){
			return 0;
		}
		virtual ~XPCocktail(){}
};
}
