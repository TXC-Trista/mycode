//��ӡ1000-2000��֮�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж��ǲ�������ķ���
		//1.��4���������ܱ�100����������
		//2.�ܱ�400����������
		//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		/*if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
				count++;
			}
		}*/
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			printf("%d\n", year);
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
			count++;
		}
	}
	printf("count = %d ", count);
	return 0;
}