#pragma once
#include "flybehavior.h"
class FlyWithSuperPower:public FlyBehavior{
	public:
		virtual void doFly(){
			cout << "\tFlying with Super Power!\n";
		}
};
