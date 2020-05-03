#include <iostream>
#include <fstream>
#include <string>
#include "head.h"

using namespace std;



int search(char *nameopen)
{
	 details detail;
	fstream r;
	int k=0;
	int a2;
	double sweight,sv;
	string sname,smaterial;
	r.open(nameopen,ios::in);
	cout<<"По какому параметру будет осуществляться поиск :"<<endl;
	cout<<" 1. Поиск по названию"<<endl;
	cout<<" 2. Поиск по материалу"<<endl;
	cout<<" 3. Поиск по весу "<<endl;
	cout<<" 4. Поиск по объему "<<endl;
	cin>>a2;
	switch(a2)
	{
		case(1):
			{		
				cout<<"Введите название детали : ";
				cin>>sname;
				while(r>>detail.name>>detail.material>>detail.weight>>detail.v)
				{
					
				
					if(sname==detail.name)
					{	
						detail.pechat_det();
						k++;
					}
					
					
				}
				if (k==0)
				cout<<"Деталей не найдено"<<endl;
				break;	
			}
		case(2):
			{
				cout<<"Введите материал детали : ";
				cin>>smaterial;
				while(r>>detail.name>>detail.material>>detail.weight>>detail.v)
				{
					
					if(smaterial==detail.material)
					{
						
						detail.pechat_det();
						k++;
					}
					
				}
				if (k==0)
				cout<<"Деталей не найдено"<<endl;
				break;	
			}
		case(3):
			{
				cout<<"Введите вес детали : ";
				cin>>sweight;
				while(r>>detail.name>>detail.material>>detail.weight>>detail.v)
				{
						
					if(sweight==detail.weight)
					{
						detail.pechat_det();
						k++;
					}
					
				}
				if (k==0)
				cout<<"Деталей не найдено"<<endl;
				break;	
			}
		case(4):
			{
				cout<<"Введите объем детали : ";
				cin>>sv;
				while(r>>detail.name>>detail.material>>detail.weight>>detail.v)
				{
					if(sv==detail.v)
					{
						
						detail.pechat_det();
						k++;
					}
				
				}
				if (k==0)
				cout<<"Деталей не найдено"<<endl;
				break;	
			}
		default: cout<<"\n Некорректный ввод."<<endl;
	}
	r.close();
	return 0;	
	
	
}


