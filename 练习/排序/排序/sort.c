//���������� ��С��������
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	//����
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	//����˳��
	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	if (x > z)
	{
		int temp = x;
		x = z;
		z = temp;
	}
	if (y > z)
	{
		int temp = y;
		y = z;
		z = temp;
	}

	//��� ��С����
	printf("%d %d %d", x, y, z);
	return 0;
}