#define _CRT_SECURE_NO_WARNINGS
////������Ϸ
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
//	printf("���Ѿ������һ��1��100֮�������");
//	do {
//		printf("��²����1��100֮�������\n");
//		scanf("%d", &a);
//		count++;
//		if (a > number) {
//			printf("��µ�������");
//		}
//		else if (a < number) {
//			printf("��µ���С��");
//		}
//	} while (a != number);
//	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);
//}
//int main()
//{
//	int x = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (x);
//	return 0;
//}
////���ֵĳ���Ϊ2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { "��������˧" };
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
////����һ��unsigned���ֱ��ӡ����ÿһλ���ݹ飩
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
//	printf("��������ֵ��");
//	scanf("%u", &x);
//	print(x);
//	return 0;
//}
////���õ�������n�Ľ׳�
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
//	printf("���Ϊ%d", x);
//	return 0;
//}
//// �����ַ������ȵ��Զ��庯��
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
////���õݹ�����ַ����ĳ���
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