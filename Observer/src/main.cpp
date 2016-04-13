#include "incs.h"
#include <iostream>
using namespace std;
using namespace ObserverPattern;
int main(int argc, char** argv){
	PublicFigure* pf = new PublicFigure("President");
	TV* defaultTV = new TV(pf);
	TV* nationalTV = new NationalTV(pf);
	pf->startDay();

	delete pf;
	delete defaultTV;
	delete nationalTV;
	return 0;
}

