#define _CRT_SECURE_NO_WARNINGS
////深度理解数组与指针
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
// 
////不使用中间（局部）变量交换两个变量的值
////算术方法实现
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a与b的值：\n");
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//// 位运算方法实现
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a与b的值：\n");
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
// 
////输入一行字符，统计其中 空格 英文字母 数字 以及 其他字符的个数
//#include<stdio.h>
//int main()
//{
//	char str[50] = { '0'};
//	printf("请输入一行字符：键入\"Enter\"表示输入结束\n");
//	int i = 0;
//	scanf("%c", &str[i]);
//	while (str[i] != '\n')
//	{
//		i++;
//		scanf("%c", &str[i]);
//	}
//	int s = 0;//space空格
//	int a = 0;//alphabet英文字母
//	int n = 0;//number数字
//	int o = 0;//other char其他字符
//	int h = 0;
//		while (str[h] != '\n')
//		{
//			if (str[h] == 32)
//				s++;//计算空格个数
//			else if (str[h] >= 48 && str[h] <= 57)
//				n++;//计算数字个数
//			else if ((str[h] >= 65 && str[h] <= 90) || (str[h] >= 97 && str[h] <= 122))
//				a++;//计算英文字母个数
//			else
//				o++;//计算其他字符个数
//			h++;
//		}
//	printf("空格s=%d 数字n=%d 英文字母a=%d 其他字符o=%d\n", s, n, a, o);
//	return 0;
//}
// 


