#define _CRT_SECURE_NO_WARNINGS
////ʮ��������������
//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("������ʮ����ֵ��");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			//��������
//			/*if (a[i] > a[j])
//			{
//				swap(&a[i], &a[j]);
//			}*/
//			//��������
//			/*if (a[i] < a[j])
//			{
//				swap(&a[i], &a[j]);
//			}*/
//		}
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
////����ǰ20��쳲�������
//#include<stdio.h>
//int main()
//{
//	int a[20] = { 1,1 };
//	for (int i = 2; i < 20; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	printf("ǰ20��쳲�������Ϊ��");
//	for (int x = 0; x < 20; x++)
//	{
//		if ( x % 5 == 0)
//		{
//			printf("\n");
//		}
//		printf("%-5d ", a[x]);
//		
//	}
//	
//	return 0;
//}
////����ʮ����ֵ���������ֵ������ӡ�����±�
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int imax = 0;
//	int i = 0;
//	printf("������ʮ����ֵ��");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (a[0] < a[i])
//		{
//			a[0] = a[i];
//			imax = i;
//		}
//	}
//	printf("ʮ����ֵ�����ֵΪ%d ,�����±�Ϊ%d\n", a[0], imax);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10], b[10], i;
//	for (i = 0;i<10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0;i<9; i++)
//		b[i + 1] = a[i + 1] - a[i];
//	for (i = 1; i < 10; i++)
//	{
//		printf("%5d", b[i]);
//		if (i%3==0)
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
////C���Գ�����ƽ̳�
////���ࣺ����	��ϰ��
////Page 103 ����������
////��1��
//#include<stdio.h>
//int main()
//{
//	int x, i;
//	for (i = 1; i <= 100; i++)
//	{
//		x = i;
//		if (++x % 2 == 0)
//			if (++x % 3 == 0)
//				if (++x % 7 == 0)
//					printf("%d", x);
//	}
//	return 0;
//}
////�������ǰ��ճ�����٣�Ч�ʵ���
////��Ӧ�ÿ���Ѱ�ҹ��ɣ��������
////�۲쵽��������1��100��x+1�ܱ�2������x+2�ܱ�3������x+3�ܱ�7��������x
////�����ǿ��Դ�7�ı������𣬷����Ч
////�𰸣�2870
////��2��
//#include<stdio.h>
//int main()
//{
//	int i, b, k = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		b = i % 2;
//		while (b-- == 0)
//		{
//			k++;
//		}
//	}
//	printf("%d,%d", k, b);
//	return 0;
//}
////�𰸣�2��0
////��3��
//#include<stdio.h>
//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d\n", s);
//	return 0;
//}
////�𰸣�5
////��4��
//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int j = 0;
//	do
//	{
//		j = j + i;
//		i--;
//	} while (i > 2);
//	printf("%d\n",j);
//	return 0;
//}
////�𰸣�52
//#include<stdio.h>
//int main()
//{
//	int n1, n2;
//	scanf("%d", &n2);
//	while (n2 != 0)
//	{
//		n1 = n2 % 10;
//		n2 = n2 / 10;
//		printf("%d", n1);
//	}
//	return 0;
//}
////�𰸣�4321
