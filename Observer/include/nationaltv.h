#pragma once
#include "incs.h"
#include <iostream>
using namespace std;
namespace ObserverPattern{

class NationalTV: public TV{
	public:
		NationalTV(Subject* o):TV(o){}
		virtual void showNews(){
			cout << "\n[BreakingNews] ";
			cout << "\t\"" << current << "\"";
			cout << "\n\t\t  [ NTV News ]\n"; 
		}
};

}
