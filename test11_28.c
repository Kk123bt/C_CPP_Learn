// #include <stdio.h>
// int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//6
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
// }

// #include <stdio.h>
// int main()
//{
//     int a = 7;
//     int b = 2;
//     float c = 2.0f;
//     printf("%d\n", 3);
//     printf("%f\n", a / c);
//
//     return 0;
// }
// #include<stdio.h>
// int main()
//{
//     int a = 0;
//     scanf("%d", &a);
//     if (a >= 140)
//         printf("Genius\n");
//
//     return 0;
// }
// #include<stdio.h>
// int main()
//{
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a == b)
//         printf("%d=%d", a, b);
//     if (a > b)
//         printf("%d>%d", a, b);
//     if (a < b)
//         printf("%d<%d", a, b);
//
//     return 0;
// }

// #include <stdio.h>
//
// int main()
//{
//     int a;
//     int i = 0;
//
//     while (scanf("%d", &a) != EOF)
//     {
//         for (i = 0; i < a; i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//
//     return 0;
//
// }

// #include<stdio.h>
//
// int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
// }
//
// #include<stdio.h>
//
//
//
// int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int i = 0;
//	if (c > b)
//	{
//		i = b;
//		b = c;
//		c = i;
//	}
//	if (b > a)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//	return 0;
// }
//
// #include <stdio.h>
//
// int main()
//{
//     int a, b, c;
//
//     while (scanf("%d %d %d", &a, &b, &c) != EOF)
//     {
//         if (a + b > c || a + c > b || b + c > a)
//         {
//             if (a == b == c)
//                 printf("Equilateral triangle!\n");
//             if (a == b != c || a == c != b || b == c != a)
//                 printf("Isosceles triangle\n");
//
//         }
//         else
//             printf("Not a triangle!\n");
//     }
//
//     return 0;
// }

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

#include <stdio.h>

// int main()
// {
//     int i = 0;
//     int sum = 0;
//     for (i = 1; i <= 100; i++)
//     {
//         sum = 1 / i;
//         i = -i;
//         printf("%d ", sum);
//     }

//     return 0;
// }
#define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//6
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
// }

// #include <stdio.h>
// int main()
//{
//     int a = 7;
//     int b = 2;
//     float c = 2.0f;
//     printf("%d\n", 3);
//     printf("%f\n", a / c);
//
//     return 0;
// }
// #include<stdio.h>
// int main()
//{
//     int a = 0;
//     scanf("%d", &a);
//     if (a >= 140)
//         printf("Genius\n");
//
//     return 0;
// }
// #include<stdio.h>
// int main()
//{
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a == b)
//         printf("%d=%d", a, b);
//     if (a > b)
//         printf("%d>%d", a, b);
//     if (a < b)
//         printf("%d<%d", a, b);
//
//     return 0;
// }

// #include <stdio.h>
//
// int main()
//{
//     int a;
//     int i = 0;
//
//     while (scanf("%d", &a) != EOF)
//     {
//         for (i = 0; i < a; i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//
//     return 0;
//
// }

// #include<stdio.h>
//
// int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
// }
//
// #include<stdio.h>
//
//
//
// int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int i = 0;
//	if (c > b)
//	{
//		i = b;
//		b = c;
//		c = i;
//	}
//	if (b > a)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//	return 0;
// }
//
// #include <stdio.h>
//
// int main()
//{
//     int a, b, c;
//
//     while (scanf("%d %d %d", &a, &b, &c) != EOF)
//     {
//         if (a + b > c || a + c > b || b + c > a)
//         {
//             if (a == b == c)
//                 printf("Equilateral triangle!\n");
//             if (a == b != c || a == c != b || b == c != a)
//                 printf("Isosceles triangle\n");
//
//         }
//         else
//             printf("Not a triangle!\n");
//     }
//
//     return 0;
// }

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

// #include <stdio.h>
//
// int main()
//{
//	int i = 0;
//	double sum=0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//		i = -i;
//		if (i == 100)
//		{
//			printf("%f", sum);
//		}
//	}
//
//	return 0;
// }

// 编写程序数一下 1到 100 的所有整数中出现多少个数字9

// #include<stdio.h>
//
// int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			sum++;
//		if (i % 10 == 9)
//			sum++;
//	}
//	printf("%d", sum);
//
//	return 0;
// }

// #include<stdio.h>
// int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i / 100 != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
// }

// 求10 个整数中最大值

#include <stdio.h>

int main()
{
    int i = 0;
    int arr[10] = {0};
    int max = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}