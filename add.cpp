#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "func.h"

using namespace std;

int add(char *nameopen){
	
	details detail;
	fstream dobav;
	dobav.open(nameopen,ios::app);
	cin>>detail;
	dobav<<detail;
	dobav.close();	
	return 0;
}

	

