#define _CRT_SECURE_NO_WARNINGS
////猜数游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("*****     0.exit     *****\n");
//	printf("*****     1.paly     *****\n");
//	printf("**************************\n");
//}
//void game()
//{
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//	printf("我已经想好了一个1到100之间的数。");
//	do {
//		printf("请猜猜这个1到100之间的数：\n");
//		scanf("%d", &a);
//		count++;
//		if (a > number) {
//			printf("你猜的数大了");
//		}
//		else if (a < number) {
//			printf("你猜的数小了");
//		}
//	} while (a != number);
//	printf("太好了，你用了%d次就猜到了答案。\n", count);
//}
//int main()
//{
//	int x = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (x);
//	return 0;
//}
////汉字的长度为2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { "海子亮最帅" };
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
////接受一个unsigned，分别打印它的每一位（递归）
//#include<stdio.h>
//
//void print(unsigned n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned x = 0;
//	printf("请输入数值：");
//	scanf("%u", &x);
//	print(x);
//	return 0;
//}
////利用迭代计算n的阶乘
//#include<stdio.h>
//int fac(int n)
//{
//	if (n> 1)
//	{
//		return n* fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x=fac(n);
//	printf("结果为%d", x);
//	return 0;
//}
//// 计算字符串长度的自定义函数
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr[] = {"abcd12340"};
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
////利用递归计算字符串的长度
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = { "abcd12340" };
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}