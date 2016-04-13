#pragma once
#include <string>
#include <iostream>
#include "flybehavior.h"
#include "disappearbehavior.h"
using namespace std;
class SuperHero{
	private:
		string name;
	protected:
		FlyBehavior* fly_behavior;
		DisappearBehavior* disappear_behavior;
	public:
		SuperHero(){}
		SuperHero(string name):name(name),fly_behavior(0){
			cout << "Super Hero : " << name << " is being created\n"; 
		}
		virtual ~SuperHero(){
			cout << "Super Hero : " << name << " is being destroyed\n";
		}
		void setFlyBehavior(FlyBehavior* flyBehavior){
			delete this->fly_behavior;
			this->fly_behavior = flyBehavior;
		}
		void setDisappearBehavior(DisappearBehavior* disappearBehavior) {
			delete this->disappear_behavior;
			this->disappear_behavior = disappearBehavior;
		}
		virtual void fly() { 
			cout << name << " is going to fly\n";
			fly_behavior->doFly();
		}
		virtual void disappear(){
			cout << name << " will disappear\n";
			disappear_behavior->disappear();
		}
		virtual void appear() {
			cout << name << " is here\n";
		}
};
