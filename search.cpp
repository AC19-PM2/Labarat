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
	cout<<"�� ������ ��������� ����� �������������� ����� :"<<endl;
	cout<<" 1. ����� �� ��������"<<endl;
	cout<<" 2. ����� �� ���������"<<endl;
	cout<<" 3. ����� �� ���� "<<endl;
	cout<<" 4. ����� �� ������ "<<endl;
	cin>>a2;
	switch(a2)
	{
		case(1):
			{		
				cout<<"������� �������� ������ : ";
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
				cout<<"������� �� �������"<<endl;
				break;	
			}
		case(2):
			{
				cout<<"������� �������� ������ : ";
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
				cout<<"������� �� �������"<<endl;
				break;	
			}
		case(3):
			{
				cout<<"������� ��� ������ : ";
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
				cout<<"������� �� �������"<<endl;
				break;	
			}
		case(4):
			{
				cout<<"������� ����� ������ : ";
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
				cout<<"������� �� �������"<<endl;
				break;	
			}
		default: cout<<"\n ������������ ����."<<endl;
	}
	r.close();
	return 0;	
	
	
}


