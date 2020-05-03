#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <malloc.h>
#include "head.h"
#include "pech.c"
#include "search.c"
#include "add.c"
#include "delit.c"


int main() {
	struct details detail;
	setlocale(LC_ALL, "Rus");
	int N;
	int i;
	int a1;
	printf("1. Вывод списка всех деталей;\n");
	printf("2. Добавление детали в список;\n");
	printf("3. Удаление детали из списка;\n");
	printf("4. Поиск детали в списке;\n");
	printf("5. Выход из программы;\n");
	printf("Выберите действие :");
	
	

	
	do
	{
		scanf("%d",&a1);
		printf("\n");
		system("cls");
		switch(a1)
		{
			case(1):
			{	
				printf("Список всех деталей :\n");
				pech(N);
				printf("\n");
				break;
			}
			case(2):
			{
				add();
				printf("\nДеталь добавленна.\n");
				printf("\n");
				break;
					
			}	
			case(3):
			{
				delit();
				printf("\nДеталь удаленна.\n");
				printf("\n");
				break;
			}
			case(4):
			{
				search();
				printf("\n");
				break;
			}
			case(5):
			{
				exit(1);
			}	
			default:
			{
				printf("\n Некорректный ввод, попробуйте снова.\n");
			}
		}
		
		printf("1. Вывод списка всех деталей;\n");
		printf("2. Добавление детали в список;\n");
		printf("3. Удаление детали из списка;\n");
		printf("4. Поиск детали в списке;\n");
		printf("5. Выход из программы;\n");
		printf("Выберите действие :");
		
	} while(a1!=5);
	
	return 0;
}




