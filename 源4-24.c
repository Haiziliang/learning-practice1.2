#define _CRT_SECURE_NO_WARNINGS
////十个数升序降序排序
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
//	printf("请输入十个数值：");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			//升序排序
//			/*if (a[i] > a[j])
//			{
//				swap(&a[i], &a[j]);
//			}*/
//			//降序排列
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
////计算前20个斐波那契数
//#include<stdio.h>
//int main()
//{
//	int a[20] = { 1,1 };
//	for (int i = 2; i < 20; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	printf("前20个斐波那契数为：");
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
////输入十个数值，计算最大值，并打印它的下标
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int imax = 0;
//	int i = 0;
//	printf("请输入十个数值：");
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
//	printf("十个数值中最大值为%d ,它的下标为%d\n", a[0], imax);
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
////C语言程序设计教程
////主编：周新	王习特
////Page 103 三、读程题
////第1题
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
////该题若是按照程序穷举，效率低下
////则应该考虑寻找规律，快速求解
////观察到该题是找1到100中x+1能被2整除，x+2能被3整除，x+3能被7整除的数x
////则我们可以从7的倍数找起，方便高效
////答案：2870
////第2题
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
////答案：2，0
////第3题
//#include<stdio.h>
//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d\n", s);
//	return 0;
//}
////答案：5
////第4题
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
////答案：52
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
////答案：4321
