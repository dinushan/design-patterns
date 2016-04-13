#include <iostream>
#include "superhero.h"
#include "superman.h"
#include "spiderman.h"
#include "invisibleman.h"
#include "chucknorriss.h"
using namespace std;

int main(int argc, char** argv){
	cout << "\n\tLoading Super Heros...\n";
	SuperMan super_man;
	SpiderMan spider_man;
	InvisibleMan invisible_man;
	ChuckNorriss chuck_norris;
	
	cout << "\n";
	
	super_man.appear();
	spider_man.appear();
	invisible_man.appear();
	chuck_norris.appear();

	cout << "\n\tStart Flying...\n";
	super_man.fly();
	spider_man.fly();
	invisible_man.fly();
	chuck_norris.fly();
	
	cout << "\n\tStart Disappearing...\n";
	super_man.disappear();
	spider_man.disappear();
	invisible_man.disappear();
	chuck_norris.disappear();
	
	cout << "\n\tDestroying Super Heros\n";
	return 0;
}

