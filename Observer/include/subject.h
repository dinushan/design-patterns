#pragma once
#include "incs.h"
namespace ObserverPattern{

class Subject{
	public:
		virtual void registerObserver(Observer* observer) = 0;
		virtual void removeObserver(Observer* observer) = 0;
		virtual void notifyObservers() = 0;
};

}
