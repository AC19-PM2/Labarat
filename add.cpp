#include <iostream>
#include <fstream>
#include <string>
#include "head.h"

using namespace std;

int add(char *nameopen){
	
	details detail;
	fstream dobav;
	dobav.open(nameopen,ios::app);
	detail.dobav_det();
	dobav<<detail.name<<" "<<detail.material<<" "<<detail.weight<<" "<<detail.v<<endl;
	dobav.close();	
	return 0;
}

	

