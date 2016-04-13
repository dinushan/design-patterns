#include "invisibleman.h"
#include "flynoway.h"
#include "disappearwithsuperpower.h"
#include <iostream>
InvisibleMan::InvisibleMan(): SuperHero("Invislbe Man"){
	fly_behavior = new FlyNoWay();
	disappear_behavior = new DisappearWithSuperPower();
//	std::cout << "Creation of Invisible Man\n";
}
InvisibleMan::~InvisibleMan(){
//	std::cout << "End of Invisible Man\n";
}
