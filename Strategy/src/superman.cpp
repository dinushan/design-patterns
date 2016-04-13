#include "superman.h"
#include "flywithsuperpower.h"
#include "disappearnoway.h"
#include <iostream>
SuperMan::SuperMan(): SuperHero("Super Man"){
	fly_behavior = new FlyWithSuperPower();
	disappear_behavior = new DisappearNoWay();
//	std::cout << "Creation of Super Man\n";
}
SuperMan::~SuperMan(){
//	std::cout << "End of Super Man\n";
}
