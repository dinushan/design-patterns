#pragma once
#include "flybehavior.h"
class FlyNoWay:public FlyBehavior{
	public:
		virtual void doFly(){
			cout << "\tI can't fly!\n";
		}
};
