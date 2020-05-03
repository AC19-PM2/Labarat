#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include "head.h"


int add()//Функция добавления структуры
{
	struct details detail;
	FILE*dob;	
	dob=fopen("base.bin","ab");
	printf("Введите имя детали :");
	scanf("%s", detail.name);
	printf("\nВведите материал детали :");
	scanf("%s", detail.material);
	printf("\nВведите вес детали :");
	scanf("%f",&detail.weight);
	printf("\nВведите объем детали: ");
	scanf("%f",&detail.v);
	detail.vivod=true;

	
	fwrite(&detail, sizeof(struct details), 1,dob);
	fclose(dob);
	return 0;
}
