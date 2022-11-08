#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 1;
//	printf("%d\n", a);
//	return 0;12   
//}
//int Add(int x, int y)
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d %d", &a, &b);
//
//}
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}
//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//	if (M % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    if (x < 0)
//        printf("1\n");
//    else if (x > 0)
//        printf("-1\n");
//    else
//        printf("0\n");
//    return 0;
//}
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    if (x < 0)
//        printf("1\n");
//    else if (x > 0)
//        printf("-1\n");
//    else
//        printf("0\n");
//    return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	printf("%d %d\n", m/n, m % n);
//	return 0;
//}
//int main(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum=Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("ÊäÈëa£¬bµÄÖµ\n");
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);
//	printf("%d\n",max);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{  
//		printf("%d",a );
//	    printf(">");
//		printf("%d",b);
//		return 0;
//	}
//	if (a < b)
//	{
//        printf("%d",a);
//	    printf("<");
//	    printf("%d", b);
//		return 0;
//	}
//	if (a = b)
//	{
//            printf("%d", a);
//		    printf("=");
//		    printf("%d", b);
//			return 0;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) ==1)
//	{
//		if (n % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//		if (n >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{ 
//		if (n >= 90 && n <= 100)
//			printf("Perfect\n");
//	}
//		
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) == 1)
//	{
//		if (a > b)
//		{
//			printf("%d", a);
//			printf(">");
//			printf("%d", b);
//		}
//		else if (a < b)
//		{
//			printf("%d", a);
//			printf("<");
//			printf("%d", b);
//		}
//		else
//		{
//			printf("%d", a);
//			printf("=");
//			printf("%d", b);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) !=EOF)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d=%d\n", a, b);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%s\n", n);
//	printf("%s\n", n);
//	return 0;¡®£»
//}
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d ", &n) != EOF)
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 0;
	while (scanf("%d\n", &n) != EOF)
	{
		for (i = 1; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}




