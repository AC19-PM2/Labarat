#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "func.h"

using namespace std;



int izm(char *nameopen){
	int N,i,iz,a3;
	string newname, newmaterial;
	double newweight, newv;
	N=pech(nameopen);
	details *detail=new details[N];
	cout<<"Выберите деталь, которую хотите изменить :";
	cin>>iz;
	cout<<endl;
	fstream izmen;
	izmen.open(nameopen,ios::in);
		for(i=0;i<N;i++){
		izmen>>detail[i].name>>detail[i].material>>detail[i].weight>>detail[i].v;
	} 
	
	cout<<"Какой параметр хотите изменить :"<<endl;
	cout<<" 1. Название"<<endl;
	cout<<" 2. Материал"<<endl;
	cout<<" 3. Вес"<<endl;
	cout<<" 4. Объем"<<endl;
	cin>>a3;
	switch(a3)
	{
		case(1):
			{		
				cout<<"Введите новое название детали : ";
				cin>>newname;
				detail[iz-1].name=newname;
				break;	
			}
		case(2):
			{
				cout<<"Введите новый материал детали : ";
				cin>>newmaterial;
				detail[iz-1].material=newmaterial;
			
				break;	
			}
		case(3):
			{
				cout<<"Введите новый вес детали: ";
				cin>>newweight;
				detail[iz-1].weight=newweight;
				break;	
			}
		case(4):
			{
				cout<<"Введите новый объем детали: ";
				cin>>newv;
				detail[iz-1].v=newv;
				break;	
			}
		default: cout<<"\n Некорректный ввод."<<endl;
	}
	izmen.close();
	izmen.open(nameopen,ios::trunc);
	izmen.close();
	
	izmen.open(nameopen,ios::out);
	for(i=0;i<N;i++)
	{
		izmen<<detail[i].name<<" "<<detail[i].material<<" "<<detail[i].weight<<" "<<detail[i].v<<endl;
	}
	izmen.close();
	delete [] detail;
	return 0;
	
	
	
}





