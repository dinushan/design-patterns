#pragma once
#include "cocktail.h"
#include <string>
using namespace std;
namespace DecoratorPattern{
class LiquorDecorator: public Cocktail{
	public:
		virtual string getDescription() = 0;
};
}
