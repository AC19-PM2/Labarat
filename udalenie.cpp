#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "func.h"

using namespace std;



int udalenie(char *nameopen){
	int N,d;
	int k=0;
	int i=0;
	N=pech(nameopen);
	cout<<N<<endl;
	details *detail;
	detail=new details[N];
	cout<<"Введите номер детали, которую хотите удалить : "<<endl;
	cin>>d;
	fstream udal;
	udal.open(nameopen, ios::in);
	for(i=0;i<N;i++){
		udal>>detail[i];
	} 
	udal.close();
	udal.open(nameopen,ios::trunc);
	udal.close();
	udal.open(nameopen,ios::out);
	for(i=0;i<N;i++)
	{
		if((i+1!=d))
		udal<<detail[i];
	}
	udal.close();

	delete [] detail;
	return 0;	
}



