#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include "head.h"

int search()//������� ������
{	
	struct details detail;
	FILE*ch;
	int k=0;
	int a2;
	float sweight,sv;
	char sname[20],smaterial[20];
	ch=fopen("base.bin","rb");
	printf("�� ������ ��������� ����� �������������� ����� :\n 1. ����� �� �������� \n 2. ����� �� ���������\n 3. ����� �� ���� \n 4. ����� �� ������ \n");
	scanf("%d",&a2);
	switch(a2)
	{
		case(1):
			{		
				printf("������� �������� ������ : ");
				scanf("%s",sname);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(strcmp(sname,detail.name)==0)
						{
						
							printf("��������- %s ��������- %s ���=%2.f �����=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
					
				}
				if (k==0)
				printf("������ �� �������");
				break;	
			}
		case(2):
			{
				printf("������� �������� ������ : ");
				scanf("%s",smaterial);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(strcmp(smaterial,detail.material)==0)
						{
						
							printf("��������- %s ��������- %s ���=%2.f �����=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("������ �� �������");
				break;	
			}
		case(3):
			{
				printf("������� ��� ������ : ");
				scanf("%f",&sweight);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(sweight==detail.weight)
						{
							printf("��������- %s ��������- %s ���=%2.f �����=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("������ �� �������");
				break;	
			}
		case(4):
			{
				printf("������� ����� ������ : ");
				scanf("%f",&sv);
				while(fread(&detail,sizeof(struct details),1,ch))
				{
					if(detail.vivod==true)
					{	
						if(sv==detail.v)
						{
						
							printf("��������- %s ��������- %s ���=%2.f �����=%2.f \n", detail.name, detail.material, detail.weight, detail.v);
							k++;
						}
					}
				}
				if (k==0)
				printf("������ �� �������");
				break;	
			}
		default: printf("\n ������������ ����.\n");
	}
	fclose(ch);
	return 0;
	
	
}
