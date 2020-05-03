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
		cout<<"Название детали - "<<name<<"; Материал - "<<material<<"; Вес детали - "<<weight<<"; Объем детали - "<<v<<endl;			
		}
		void dobav_det()
		{
			cout<<"Введите название детали :"<<endl;
			cin>>name;
			cout<<"Введите материал детали :"<<endl;
			cin>>material;
			cout<<"Введите вес детали :"<<endl;
			cin>>weight;
			cout<<"Введите объем детали :"<<endl;
			cin>>v;
		}
};
int pech(int N);

#endif
