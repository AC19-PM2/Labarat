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
	printf("1. ����� ������ ���� �������;\n");
	printf("2. ���������� ������ � ������;\n");
	printf("3. �������� ������ �� ������;\n");
	printf("4. ����� ������ � ������;\n");
	printf("5. ����� �� ���������;\n");
	printf("�������� �������� :");
	
	

	
	do
	{
		scanf("%d",&a1);
		printf("\n");
		system("cls");
		switch(a1)
		{
			case(1):
			{	
				printf("������ ���� ������� :\n");
				pech(N);
				printf("\n");
				break;
			}
			case(2):
			{
				add();
				printf("\n������ ����������.\n");
				printf("\n");
				break;
					
			}	
			case(3):
			{
				delit();
				printf("\n������ ��������.\n");
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
				printf("\n ������������ ����, ���������� �����.\n");
			}
		}
		
		printf("1. ����� ������ ���� �������;\n");
		printf("2. ���������� ������ � ������;\n");
		printf("3. �������� ������ �� ������;\n");
		printf("4. ����� ������ � ������;\n");
		printf("5. ����� �� ���������;\n");
		printf("�������� �������� :");
		
	} while(a1!=5);
	
	return 0;
}




