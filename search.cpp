#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "func.h"

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
	cout<<" 1. Название"<<endl;
	cout<<" 2. Материал"<<endl;
	cout<<" 3. Вес "<<endl;
	cout<<" 4. Объем "<<endl;
	cin>>a2;
	switch(a2)
	{
		case(1):
			{		
				cout<<"Введите название детали: ";
				cin>>sname;
				while(r>>detail)
				{
					
				
					if(sname==detail.name)
					{	
						cin>>detail;
						k++;
					}
					
					
				}
				if (k==0)
				cout<<"Деталей не найдено."<<endl;
				break;	
			}
		case(2):
			{
				cout<<"Введите материал детали : ";
				cin>>smaterial;
				while(r>>detail)
				{
					
					if(smaterial==detail.material)
					{
						
						cin>>detail;
						k++;
					}
					
				}
				if (k==0)
				cout<<"Деталей не найдено."<<endl;
				break;	
			}
		case(3):
			{
				cout<<"Введите вес детали : ";
				cin>>sweight;
				while(r>>detail)
				{
						
					if(sweight==detail.weight)
					{
						cin>>detail;
						k++;
					}
					
				}
				if (k==0)
				cout<<"Деталей не найдено."<<endl;
				break;	
			}
		case(4):
			{
				cout<<"Введите объем детали : ";
				cin>>sv;
				while(r>>detail)
				{
					if(sv==detail.v)
					{
						
						cin>>detail;
						k++;
					}
				
				}
				if (k==0)
				cout<<"Деталей не найдено."<<endl;
				break;	
			}
		default: cout<<"\n Некорректный ввод."<<endl;
	}
	r.close();
	return 0;	
	
	
}



