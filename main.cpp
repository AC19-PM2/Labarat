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
		cout<<"Oшибка запуска"<<endl;
		return -1;
	}
	
	cout<<"1. Вывод списка всех деталей;"<<endl;
	cout<<"2. Добавление детали в список;" <<endl;
	cout<<"3. Удаление детали из списка;"<<endl;
	cout<<"4. Поиск детали в списке;" <<endl;
	cout<<"5. Редактирование детали;"<<endl;
	cout<<"6. Выход из программы;"<<endl;
	cout<< "Выберите действие :"<<endl;
	
	
		do
	{
		cin>>a1;
		cout<<endl;
		system("cls");
		switch(a1)
		{
			case(1):
			{	
				cout<<"Список всех деталей :"<<endl;
				N=pech(nameopen);
				cout<<endl;
				break;
			}
			case(2):
			{
				add(nameopen);
				cout<<"Деталь добавленна."<<endl;
				break;
					
			}	
			case(3):
			{
				udalenie(nameopen);
				cout<<"Деталь удаленна."<<endl;
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
				cout<<"Деталь измененна."<<endl;
				break;
			}
			case(6):
			{
				exit(1);
			}	
			default:
			{	
				cout<<endl;
				cout<<"Некорректный ввод, попробуйте снова."<<endl;
			}
		}
		
		cout<<"1. Вывод списка всех деталей;"<<endl;
		cout<<"2. Добавление детали в список;" <<endl;
		cout<< "3. Удаление детали из списка;"<<endl;
		cout<<"4. Поиск детали в списке;" <<endl;
		cout<<"5. Редактирование детали;"<<endl;
		cout<<"6. Выход из программы;"<<endl;
		cout<<"Выберите действие :"<<endl;
		
	} while(a1!=6);
	
	
	
	

	return 0; 		
}
