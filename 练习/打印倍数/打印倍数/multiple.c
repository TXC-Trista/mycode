//дһ�������ӡ1-100֮������3�ı���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num = 1;
	int m = 0;
	for (num = 1; num <= 100; num++)
	{
		m = num % 3;
		if (m == 0)
		{
			printf("%d\n", num);
		}
	}	
	return 0;
}
