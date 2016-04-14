#pragma once
#include "liquordecorator.h"
namespace DecoratorPattern{
class Liquor: public LiquorDecorator{
	protected:
		Cocktail* cocktail;
		unsigned short quantity_ml;
		unsigned short quantity(){
			return quantity_ml + cocktail->quantity();
		}
	public:
		Liquor(Cocktail* c, unsigned short qty):cocktail(c),quantity_ml(qty){
		}
		virtual ~Liquor(){delete cocktail;}		
};
}
