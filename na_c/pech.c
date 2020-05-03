#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#include "head.h"



int pech(int N)//Функция вывода списка структур
{	
	struct details detail;
	N=0;
	int k=0;
	FILE*ch;
	ch=fopen("base.bin","rb");
	while(fread(&detail,sizeof(struct details),1, ch))
	{
		N++;	
		if(detail.vivod==true)
		{	
			k++;
			printf("Деталь номер %d\n", k);
			printf("Название- %s Материал- %s Вес=%2.f Объём=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
		}
		
	}
	
	fclose(ch);
	return N;
}

