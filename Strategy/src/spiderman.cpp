#include "spiderman.h"
#include "flywithwebs.h"
#include "disappearnoway.h"
#include <iostream>
SpiderMan::SpiderMan(): SuperHero("Spider Man"){
	fly_behavior = new FlyWithWebs();
	disappear_behavior = new DisappearNoWay();
//	std::cout << "Creation of Spider Man\n";
}
SpiderMan::~SpiderMan(){
//	std::cout << "End of Spider Man\n";
}
