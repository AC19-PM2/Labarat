#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "func.h"

using namespace std;





	
int pech (char *nameopen) {
	details detail;
	string s;
	int N=0;
	int k=0;
	fstream pr;
	pr.open(nameopen, ios::in);
	if (!pr) {
		cout<<"Ошибка в заданном имени файла."<<endl;
		return 0;
	}
	while(pr>>detail){
		N++;
		k++;
		cout<<"Деталь номер "<<k<<endl;
		cout<<detail<<endl;
	} 
	pr.close();
	return N;
} 



