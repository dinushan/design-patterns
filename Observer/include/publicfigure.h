#pragma once
#include "incs.h"
#include <list>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <thread>
#include <iostream>
#define MAGIC_NUMBER 42

namespace ObserverPattern{
using namespace std;
class PublicFigure: public Subject{
	private :
		string name;
		list<Observer*>* observers;
		vector<string>* stuff;
		string current;
	public:
		PublicFigure(string name):name(name){
			observers = new list<Observer*>();
			stuff = new vector<string>;
			init();
		}
		virtual ~PublicFigure(){
			delete observers;
			delete stuff;
		}
		virtual void init(){
			stuff->push_back("Starting default thing1");
			stuff->push_back("Just done default thing2");
			stuff->push_back("Completed anothor default thing");
		}
		virtual void registerObserver(Observer* o){ observers->push_back(o);}
		virtual void removeObserver(Observer* o){ observers->remove(o);}
		virtual void notifyObservers(){
			for(list<Observer*>::iterator it = observers->begin(); it != observers->end(); ++it){
				Observer* o = *it;
				o->update(current);		
			}
		}
		virtual void doSomething(){
			srand(time(0));
			int ran = rand() % stuff->size();
			current = name + " : " + stuff->at(ran);
			notifyObservers();
		}
		void startDay(){
			while(true){
				doSomething();
				srand(time(0));
				int ran = rand()%100;
				if(ran == MAGIC_NUMBER)
					break;
				this_thread::sleep_for(chrono::milliseconds(1000));
			}
		}
		 
};
	
}
