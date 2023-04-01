#define _CRT_SECURE_NO_WARNINGS
////打印1000到2000年的润年
//#include<stdio.h>
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 400 == 0) ||( year % 4 == 0 && year % 100 != 0)) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
////素数查找鉴别器
//#include<stdio.h>
//#include<math.h>
//void maxsort(int* m, int* n)
//{
//	int max = 0;
//	if (*m < *n) 
//	{
//		max = *n;
//		*n = *m;
//		*m = max;
//	}
//}
//int main()
//{
//	int a = 0;//定义控制功能的变量
//	int count = 0;//用于查找素数的计数
//	printf("请选择要使用的功能：\n输入\"0\"表示使用查找器\t输入\"1\"代表使用鉴别器\n");
//	scanf("%d", &a);//选择功能
//	switch (a)
//	{
//		case 0://查找素数功能
//		{
//			int m = 0, n = 0;//素数查找范围
//			int c = 0;//需要查找范围中的数值
//			printf("请输入要查找素数的范围：如输入\"2\"\"55\"表示查找2到55之间的素数\n");
//			scanf("%d%d", &m, &n);
//			maxsort(&m, &n);//对m n排序，使m中放较大值，n中放较小值
//			if (n / 2 == 0) //排除非素数-偶数
//			{
//				n++;
//			}
//			for (c = n; c <= m; c+=2) 
//			{
//				int i;
//				for (i = 2; i <= sqrt(c); i++)//在奇数中查找素数
//				{
//					if (c % i == 0)
//					{
//						break;
//					}
//				}
//				if (i > sqrt(c))//记录素数并计数
//				{
//					count++;
//					printf("%d ", c);
//				}
//			}
//			printf("\ncount=%d\n", count);
//			break;
//		}
//		case 1://鉴别素数功能
//		{
//			int x = 0, i = 0;
//			printf("请输入数值：\n");
//			scanf("%d", &x);
//			if (x / 2 == 0) //排除非素数-偶数
//			{
//				printf("%d不是素数\n", x);
//			}
//			else
//			{
//				for (i = 3; i <= sqrt(x); i += 2)
//				{
//					if (x % i == 0) 
//					{
//						printf("%d不是素数\n", x);
//						break;
//					}
//					if (i > sqrt(x))
//					{
//						printf("%d是素数\n", x);
//					}
//				}
//			}
//			break;
//		}
//		default:printf("请输入\"0\"或\"1\"选择您要使用的功能\n");//用于对不符合操作的用户进行提示
//	}
//	return 0;
//}
////1-100的整数中含有9的个数
//#include<stdio.h>
//int main()
//{
//	int n=0, i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("9的个数为%d", n);
//	return 0;
//}
////计算1/1-1/2+1/3-1/4+···=+1/99-1/100的和
//#include<stdio.h>
//int main()
//{
//	double s = 0;
//	int i = 0;
//	int f = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		s += f * 1.0 / i;
//		f = -f;
//	}
//	printf("和为%lf", s);
//	return 0;
//}
////打印九九乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
