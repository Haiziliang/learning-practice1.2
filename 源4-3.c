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
////��ӡһ������ÿһλ
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
//	printf("������һ����������");
//	scanf("%u", &x);
//	print(x);
//	return 0;
//}
////���õݹ���n�Ľ׳�
//#include<stdio.h>
//long long Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * Fac(n - 1);
//}
//���÷ǵݹ飨ѭ������n�Ľ׳�
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
//	printf("������n��");
//	scanf("%d", &n);
//	long long x=Fac(n);
//	printf("%ld", x);
//	return 0;
//}
//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
////����˼·�㷨
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
////�ݹ�ʵ��
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
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
////���룺1729�������19
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
//	printf("������һ���Ǹ�������");
//	scanf("%d", &n);
//	int digitsum = DigitSum(n);
//	printf("%d", digitsum);
//	return 0;
//}
////��������n��k�η�
////�ǵݹ�ʵ��n��k�η�
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
//	printf("������һ����������\n������η�����\n");
//	scanf("%d%d", &n, &k);
//	long r = Pow(n, k);
//	printf("%ld", r);
//	return 0;
//}
////�ݹ�ʵ��n��k�η�
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
//	printf("������һ����������\n������η�����\n");
//	scanf("%d%d", &n,&k);
//	long r = Pow(n,k);
//	printf("%ld", r);
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////�ݹ�ʵ�� //Ч�ʽϵͣ�����ظ����㣬�˷���Դ
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
//	printf("����Ҫ��ڼ���쳲���������\n�����룺");
//	scanf("%d", &n);
//	x=Fac(n);
//	printf("%d\n", count);	//�����������м����2��쳲��������ĸ���
//	printf("%ld",x);
//	return 0;
//}
////�ǵݹ�ʵ��
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
//	printf("����Ҫ��ڼ���쳲���������\n�����룺");
//	scanf("%d", &n);
//	x = Fac(n);
//	printf("%ld", x);
//	return 0;
//}