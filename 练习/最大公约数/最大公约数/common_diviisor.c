////�����Լ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int max;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//շת�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int m, n, t;
	scanf("%d %d", &m, &n);
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("���Լ����%d", n);
	return 0;
}