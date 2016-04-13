#pragma once
#include "disappearbehavior.h"
#include <iostream>
using namespace std;
class DisappearNoWay:public DisappearBehavior{
	public:
		virtual void disappear(){
			cout << "\tWell.. I can't hide.\n";
		}
};
