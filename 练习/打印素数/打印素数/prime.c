//��ӡ100-200֮�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	////�ж������ķ�����ֻ�ܱ�1����������������
	////2-(x-1)֮�����ȥ�Գ�x�����ܲ�������
	//int x = 0;
	//int y = 0;
	//for (x = 100; x <= 200; x++)
	//{
	//	for (y = 2; y < x ; y++)
	//	{
	//		if (x % y == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (x == y)
	//	{
	//		printf("%d\n", x);
	//	}
	//}
	
	//int x = 0;
	//int y = 0;
	//int count = 0;
	//for (x = 100; x <= 200; x++)
	//{
	//	int flag = 1;  //����x��������
	//	for (y = 2; y < x ; y++)
	//	{
	//		if (x % y == 0)
	//		{
	//			flag = 0;   //��������
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d\n", x);
	//		count++;
	//	}
	//}
	//printf("\ncount = %d\n", count);

	//int x = 0;
	//int y = 0;
	//int count = 0;
	////m = a * b
	////a��b��һ��������һ�������� <= ��ƽ��m��
	////���� 16 = 2*8 = 4*4
	//for (x = 100; x <= 200; x++)
	//{
	//	int flag = 1;  //����x��������
	//	for (y = 2; y <= sqrt(x); y++)  //sqrt()�ǿ�ƽ���ĺ�������Ҫͷ�ļ�#include<math.h>
	//	{
	//		if (x % y == 0)
	//		{
	//			flag = 0;   //��������
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d\n", x);
	//		count++;
	//	}
	//}
	//printf("\ncount = %d\n", count);


	//�����Ż�
	int x = 0;
	int y = 0;
	int count = 0;
	//m = a * b
	//a��b��һ��������һ�������� <= ��ƽ��m��
	//���� 16 = 2*8 = 4*4
	for (x = 101; x <= 200; x += 2)    //��Դͷ�ϰ�ż��������������һ��
	{
		int flag = 1;  //����x��������
		for (y = 2; y <= sqrt(x); y++)  //sqrt()�ǿ�ƽ���ĺ�������Ҫͷ�ļ�#include<math.h>
		{
			if (x % y == 0)
			{
				flag = 0;   //��������
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", x);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}