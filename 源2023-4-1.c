#define _CRT_SECURE_NO_WARNINGS
////��ӡ1000��2000�������
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
////�������Ҽ�����
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
//	int a = 0;//������ƹ��ܵı���
//	int count = 0;//���ڲ��������ļ���
//	printf("��ѡ��Ҫʹ�õĹ��ܣ�\n����\"0\"��ʾʹ�ò�����\t����\"1\"����ʹ�ü�����\n");
//	scanf("%d", &a);//ѡ����
//	switch (a)
//	{
//		case 0://������������
//		{
//			int m = 0, n = 0;//�������ҷ�Χ
//			int c = 0;//��Ҫ���ҷ�Χ�е���ֵ
//			printf("������Ҫ���������ķ�Χ��������\"2\"\"55\"��ʾ����2��55֮�������\n");
//			scanf("%d%d", &m, &n);
//			maxsort(&m, &n);//��m n����ʹm�зŽϴ�ֵ��n�зŽ�Сֵ
//			if (n / 2 == 0) //�ų�������-ż��
//			{
//				n++;
//			}
//			for (c = n; c <= m; c+=2) 
//			{
//				int i;
//				for (i = 2; i <= sqrt(c); i++)//�������в�������
//				{
//					if (c % i == 0)
//					{
//						break;
//					}
//				}
//				if (i > sqrt(c))//��¼����������
//				{
//					count++;
//					printf("%d ", c);
//				}
//			}
//			printf("\ncount=%d\n", count);
//			break;
//		}
//		case 1://������������
//		{
//			int x = 0, i = 0;
//			printf("��������ֵ��\n");
//			scanf("%d", &x);
//			if (x / 2 == 0) //�ų�������-ż��
//			{
//				printf("%d��������\n", x);
//			}
//			else
//			{
//				for (i = 3; i <= sqrt(x); i += 2)
//				{
//					if (x % i == 0) 
//					{
//						printf("%d��������\n", x);
//						break;
//					}
//					if (i > sqrt(x))
//					{
//						printf("%d������\n", x);
//					}
//				}
//			}
//			break;
//		}
//		default:printf("������\"0\"��\"1\"ѡ����Ҫʹ�õĹ���\n");//���ڶԲ����ϲ������û�������ʾ
//	}
//	return 0;
//}
////1-100�������к���9�ĸ���
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
//	printf("9�ĸ���Ϊ%d", n);
//	return 0;
//}
////����1/1-1/2+1/3-1/4+������=+1/99-1/100�ĺ�
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
//	printf("��Ϊ%lf", s);
//	return 0;
//}
////��ӡ�žų˷���
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
