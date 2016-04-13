#include "chucknorriss.h"
#include "flywithsuperpower.h"
#include "flywithwebs.h"
#include "disappearwithsuperpower.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
ChuckNorriss::ChuckNorriss(): SuperHero("ChuckNorris "){
	disappear_behavior = new DisappearWithSuperPower();
//	std::cout << "Creation of ChuckNorris\n";
}
ChuckNorriss::~ChuckNorriss(){
//	std::cout << "End of ChuckNorriss\n";
}
void ChuckNorriss::fly(){
	srand(time(0));
	int ran = rand() % 2;
	if (ran == 0)
		setFlyBehavior(new FlyWithSuperPower());
	else 
		setFlyBehavior(new FlyWithWebs());
	SuperHero::fly();
}
