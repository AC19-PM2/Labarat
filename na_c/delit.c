#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <malloc.h>
#include "head.h"
//#include "pech.c"

int delit()//Функция удаления структуры
{	
	int N;
	N=pech(N);
	
	struct details *detail = (struct details *) malloc(N * sizeof(struct details));
	int k=0;
	int d;
	int i=0;
	printf("Введите номер детали, которую хотите удалить : ");
	scanf("%d", &d);
	FILE*ch;
	FILE*del;
	ch=fopen("base.bin","rb");
	
		while(fread(&detail[i],sizeof(struct details),1, ch))
	{	
		if(detail[i].vivod==true)
		{
			k++;
			if((k)==d)
			detail[i].vivod=false;
			
		}
		i++;
	}
	fclose(ch);
	del=fopen("base.bin","w+b");
	for(i=0;i<N;i++)
	{
		fwrite(&detail[i], sizeof(struct details), 1,del);	
	}
	fclose(del);	
	free(detail);
	return 0;
}	

