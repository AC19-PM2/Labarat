#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include "head.h"


int add()//������� ���������� ���������
{
	struct details detail;
	FILE*dob;	
	dob=fopen("base.bin","ab");
	printf("������� ��� ������ :");
	scanf("%s", detail.name);
	printf("\n������� �������� ������ :");
	scanf("%s", detail.material);
	printf("\n������� ��� ������ :");
	scanf("%f",&detail.weight);
	printf("\n������� ����� ������: ");
	scanf("%f",&detail.v);
	detail.vivod=true;

	
	fwrite(&detail, sizeof(struct details), 1,dob);
	fclose(dob);
	return 0;
}
