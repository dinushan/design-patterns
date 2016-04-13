#pragma once
#include <string>
using namespace std;
namespace ObserverPattern{
class Observer{
	public:
		virtual void update(string msg) = 0;
};

}
