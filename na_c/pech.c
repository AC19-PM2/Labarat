#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#include "head.h"



int pech(int N)//������� ������ ������ ��������
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
			printf("������ ����� %d\n", k);
			printf("��������- %s ��������- %s ���=%2.f �����=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
		}
		
	}
	
	fclose(ch);
	return N;
}

