#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
#include "pech.cpp"
#include "search.cpp"
#include "add.cpp"
#include "udalenie.cpp"
#include "izmenenie.cpp"

using namespace std;


int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Rus");
	int N;
	int i;
	int a1;
	char *nameopen=argv[1];
	if (argc<1){
		cout<<"O����� �������"<<endl;
		return -1;
	}
	
	cout<<"1. ����� ������ ���� �������;"<<endl;
	cout<<"2. ���������� ������ � ������;" <<endl;
	cout<<"3. �������� ������ �� ������;"<<endl;
	cout<<"4. ����� ������ � ������;" <<endl;
	cout<<"5. �������������� ������;"<<endl;
	cout<<"6. ����� �� ���������;"<<endl;
	cout<< "�������� �������� :"<<endl;
	
	
		do
	{
		cin>>a1;
		cout<<endl;
		system("cls");
		switch(a1)
		{
			case(1):
			{	
				cout<<"������ ���� ������� :"<<endl;
				N=pech(nameopen);
				cout<<endl;
				break;
			}
			case(2):
			{
				add(nameopen);
				cout<<"������ ����������."<<endl;
				break;
					
			}	
			case(3):
			{
				udalenie(nameopen);
				cout<<"������ ��������."<<endl;
				break;
			}
			case(4):
			{
				search(nameopen);
				cout<<endl;
				break;
			}
			case(5):
			{
				izm(nameopen);
				cout<<"������ ���������."<<endl;
				break;
			}
			case(6):
			{
				exit(1);
			}	
			default:
			{	
				cout<<endl;
				cout<<"������������ ����, ���������� �����."<<endl;
			}
		}
		
		cout<<"1. ����� ������ ���� �������;"<<endl;
		cout<<"2. ���������� ������ � ������;" <<endl;
		cout<< "3. �������� ������ �� ������;"<<endl;
		cout<<"4. ����� ������ � ������;" <<endl;
		cout<<"5. �������������� ������;"<<endl;
		cout<<"6. ����� �� ���������;"<<endl;
		cout<<"�������� �������� :"<<endl;
		
	} while(a1!=6);
	
	
	
	

	return 0; 		
}
