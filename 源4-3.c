#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	double i = 0, sum = 0;
//	int flag = 1;
//	for (i = 1 ; i <= 100; i++)
//	{
//		sum += flag*(1 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
////打印一个数的每一位
// #include<stdio.h>
//void print(unsigned x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%u ", x % 10);
//}
//int main()
//{
//	unsigned x = 0;
//	printf("请输入一个正整数：");
//	scanf("%u", &x);
//	print(x);
//	return 0;
//}
////利用递归求n的阶乘
//#include<stdio.h>
//long long Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * Fac(n - 1);
//}
//利用非递归（循环）求n的阶乘
//long long Fac(int n)
//{
//	long long s = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	long long x=Fac(n);
//	printf("%ld", x);
//	return 0;
//}
//字符串逆序（递归实现）
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
////常规思路算法
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr)
//{
//
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
////递归实现
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char str[])
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
////输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10+DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个非负整数：");
//	scanf("%d", &n);
//	int digitsum = DigitSum(n);
//	printf("%d", digitsum);
//	return 0;
//}
////函数计算n的k次方
////非递归实现n的k次方
//#include<stdio.h>
//long Pow(int n,int k)
//{
//	int r = n;
//	if (k > 0)
//	{
//		while (k > 1)
//		{
//			n *= r;
//			k--;
//		}
//		return n;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入一个正整数：\n请输入次方数：\n");
//	scanf("%d%d", &n, &k);
//	long r = Pow(n, k);
//	printf("%ld", r);
//	return 0;
//}
////递归实现n的k次方
//#include<stdio.h>
//long Pow(int n,int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入一个正整数：\n请输入次方数：\n");
//	scanf("%d%d", &n,&k);
//	long r = Pow(n,k);
//	printf("%ld", r);
//	return 0;
//}
//递归和非递归分别实现求第n个斐波那契数
////递归实现 //效率较低，多次重复计算，浪费资源
//#include<stdio.h>
//int count = 0;
//long Fac(int n)
//{
//	if (n == 2)
//	{
//		count++;
//	}
//	if (n < 3)
//	{
//		return 1;
//	}
//	return Fac(n - 1) + Fac(n - 2);
//}
//int main()
//{
//	int n = 0;
//	long x = 0;
//	printf("您想要求第几个斐波那契数？\n请输入：");
//	scanf("%d", &n);
//	x=Fac(n);
//	printf("%d\n", count);	//计算求解过程中计算第2个斐波那契数的个数
//	printf("%ld",x);
//	return 0;
//}
////非递归实现
//#include<stdio.h>
//long Fac(int x)
//{
//	long m = 1;
//	long n = 1;
//	long s = 1;
//	while (x > 2)
//	{
//		s = m + n;
//		m = n;
//		n = s;
//		x--;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	long x = 0;
//	printf("您想要求第几个斐波那契数？\n请输入：");
//	scanf("%d", &n);
//	x = Fac(n);
//	printf("%ld", x);
//	return 0;
//}