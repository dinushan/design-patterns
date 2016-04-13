#pragma once
#include "disappearbehavior.h"
#include <iostream>
using namespace std;
class DisappearWithSuperPower:public DisappearBehavior{
	public:
		virtual void disappear(){
			cout << "\tVanished with super power!\n";
		}
};
