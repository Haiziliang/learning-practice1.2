#define _CRT_SECURE_NO_WARNINGS
////������������ָ��
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
////��ʹ���м䣨�ֲ���������������������ֵ
////��������ʵ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ��\n");
//	scanf("%d%d", &a, &b);
//	printf("����ǰa=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//// λ���㷽��ʵ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ��\n");
//	scanf("%d%d", &a, &b);
//	printf("����ǰa=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
// 
////����һ���ַ���ͳ������ �ո� Ӣ����ĸ ���� �Լ� �����ַ��ĸ���
//#include<stdio.h>
//int main()
//{
//	char str[50] = { '0'};
//	printf("������һ���ַ�������\"Enter\"��ʾ�������\n");
//	int i = 0;
//	scanf("%c", &str[i]);
//	while (str[i] != '\n')
//	{
//		i++;
//		scanf("%c", &str[i]);
//	}
//	int s = 0;//space�ո�
//	int a = 0;//alphabetӢ����ĸ
//	int n = 0;//number����
//	int o = 0;//other char�����ַ�
//	int h = 0;
//		while (str[h] != '\n')
//		{
//			if (str[h] == 32)
//				s++;//����ո����
//			else if (str[h] >= 48 && str[h] <= 57)
//				n++;//�������ָ���
//			else if ((str[h] >= 65 && str[h] <= 90) || (str[h] >= 97 && str[h] <= 122))
//				a++;//����Ӣ����ĸ����
//			else
//				o++;//���������ַ�����
//			h++;
//		}
//	printf("�ո�s=%d ����n=%d Ӣ����ĸa=%d �����ַ�o=%d\n", s, n, a, o);
//	return 0;
//}
// 


