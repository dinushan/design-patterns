#include "incs.h"
#include <ctime>
#include <chrono>
#include <iostream>
using namespace std;
namespace ObserverPattern{
class TV: public Media,public Observer{
	protected:
		Subject* subject;
		string current;
	public:
		TV(Subject* sub){
			this->subject= sub;
			this->subject->registerObserver(this);
		}
		virtual void update(string msg){
			current = msg;
			showNews();
		}
		virtual void showNews(){
			time_t time = chrono::system_clock::to_time_t(chrono::system_clock::now());
			cout << current;
			cout << "\n\t" << ctime(&time); 
			cout << "\t\t  [DefaultTV News]\n";
		}
};
}
