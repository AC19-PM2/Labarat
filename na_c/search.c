#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include "head.h"

int search()//Функция поиска
{	
	struct details detail;
	FILE*ch;
	int k=0;
	int a2;
	float sweight,sv;
	char sname[20],smaterial[20];
	ch=fopen("base.bin","rb");
	printf("По какому параметру будет осуществляться поиск :\n 1. Поиск по названию \n 2. Поиск по материалу\n 3. Поиск по весу \n 4. Поиск по объему \n");
	scanf("%d",&a2);
	switch(a2)
	{
		case(1):
			{		
				printf("Введите название детали : ");
				scanf("%s",sname);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(strcmp(sname,detail.name)==0)
						{
						
							printf("Название- %s Материал- %s Вес=%2.f Объём=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
					
				}
				if (k==0)
				printf("Детали не найдено");
				break;	
			}
		case(2):
			{
				printf("Введите материал детали : ");
				scanf("%s",smaterial);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(strcmp(smaterial,detail.material)==0)
						{
						
							printf("Название- %s Материал- %s Вес=%2.f Объём=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("Детали не найдено");
				break;	
			}
		case(3):
			{
				printf("Введите вес детали : ");
				scanf("%f",&sweight);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(sweight==detail.weight)
						{
							printf("Название- %s Материал- %s Вес=%2.f Объём=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("Детали не найдено");
				break;	
			}
		case(4):
			{
				printf("Введите объем детали : ");
				scanf("%f",&sv);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(sv==detail.v)
						{
						
							printf("Название- %s Материал- %s Вес=%2.f Объём=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("Детали не найдено");
				break;	
			}
		default: printf("\n Некорректный ввод.\n");
	}
	fclose(ch);
	return 0;
	
	
}
