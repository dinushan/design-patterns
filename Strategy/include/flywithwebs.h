#pragma once
#include "flybehavior.h"
class FlyWithWebs:public FlyBehavior{
	public:
		virtual void doFly(){
			cout << "\tFlying with Webs!\n";
		}
};
