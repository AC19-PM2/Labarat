#include <iostream>
#include <fstream>
#include <string>
#include "head.h"

using namespace std;



int izm(char *nameopen){
	int N,i,iz,a3;
	string newname, newmaterial;
	double newweight, newv;
	N=pech(nameopen);
	details *detail=new details[N];
	cout<<"�������� ������, ������� ������ �������� :";
	cin>>iz;
	cout<<endl;
	fstream izmen;
	izmen.open(nameopen,ios::in);
		for(i=0;i<N;i++){
		izmen>>detail[i].name>>detail[i].material>>detail[i].weight>>detail[i].v;
	} 
	
	cout<<"����� �������� �� ������ �������� :"<<endl;
	cout<<" 1. ��������"<<endl;
	cout<<" 2. ��������"<<endl;
	cout<<" 3. ���"<<endl;
	cout<<" 4. �����"<<endl;
	cin>>a3;
	switch(a3)
	{
		case(1):
			{		
				cout<<"������� ����� �������� ������ : ";
				cin>>newname;
				detail[iz-1].name=newname;
				break;	
			}
		case(2):
			{
				cout<<"������� ����� �������� ������ : ";
				cin>>newmaterial;
				detail[iz-1].material=newmaterial;
			
				break;	
			}
		case(3):
			{
				cout<<"������� ����� ��� ������ : ";
				cin>>newweight;
				detail[iz-1].weight=newweight;
				break;	
			}
		case(4):
			{
				cout<<"������� ����� ����� ������ : ";
				cin>>newv;
				detail[iz-1].v=newv;
				break;	
			}
		default: cout<<"\n ������������ ����."<<endl;
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




