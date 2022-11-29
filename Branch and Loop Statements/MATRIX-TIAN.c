#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	if (表达式)
//	语句1；
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 17)
//        printf("hehe\n");
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 18)
//		printf("未成年\n");
//	else if (n >= 18 && n <= 55)
//		printf("成年\n");
//	else
//		printf("老年\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0)
//		printf("%d\n", n);
//	printf("%d\n", hehe);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == n % 2)
//		printf("奇数\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == n % 2)
//		printf("%d为奇数", n);
//	else
//		printf("%d为偶数", n);
//}
//
//switch (整型表达式)
//{
//	语句项;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	int c = 0;
// 	scanf("%d", &a,&b,&c);
// 	int S = 0;
// 	S = a * b * c;
// 	printf("体积是：%d\n", S);
// 		return 0;
// }
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 200 && i >= 100)
//	{
//		int j = 0;
//		for (j = 1; j++;)
//		{
//			if (1 == j % i)
//				printf("%d\n", j);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//			if (i % j == 0)
//			{
//				break;
//			}
//		if (i % j == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int leap_year = 0;
//	for (leap_year = 1000; leap_year <= 2000; leap_year++)
//	{
//		if ((leap_year % 4 == 0 && leap_year %100 != 0) || leap_year % 400 == 0)
//			printf("%d ", leap_year);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b=tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//} 


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", a, b);
//	if(a)
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "Welcome to the Word Cup";
//	char arr2[] = "***********************";
//	int  left = 0;
//	int right = strlen(arr1) - 1;
//
//	while(left<=right)
//	{
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("第%d次登录失败\n", i + 1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("三次密码输入错误，账户已锁定\n");
//	}
//	return 0;
//}
















