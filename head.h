#include <iostream>
#include <fstream>
#include <string>
#ifndef HEAD_H
#define HEAD_H
using namespace std;
class details
{
	public :
		string name;
		string material;
		double weight;
		double v;
		void pechat_det()
		{
		cout<<"�������� ������ - "<<name<<"; �������� - "<<material<<"; ��� ������ - "<<weight<<"; ����� ������ - "<<v<<endl;			
		}
		void dobav_det()
		{
			cout<<"������� �������� ������ :"<<endl;
			cin>>name;
			cout<<"������� �������� ������ :"<<endl;
			cin>>material;
			cout<<"������� ��� ������ :"<<endl;
			cin>>weight;
			cout<<"������� ����� ������ :"<<endl;
			cin>>v;
		}
};
int pech(int N);

#endif
