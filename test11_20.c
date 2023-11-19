#include <stdio.h>

// int my_strlen(char* str)
// {
//     if (*str != '\0')
//         return 1 + my_strlen(str+1);
//     else
//         return 0;
// }

// int main()
// {
//     char arr[] = "abc";
//     int len = my_strlen(arr);

//     printf("%d\n",len);

//     return 0;
// }

// int my_strlen(char* str)
// {
//     if(*str != '\0')
//         return 1 + my_strlen(1+str);
//     else
//         return 0;
// }

// int main()
// {
//     char arr[]="abc";
//     int len = my_strlen(arr);
//     printf("%d",len);

//     return 0;
// }

// 递归实现
// int fac(int n)
// {
//     if(n <= 1)
//         return 1;
//     else
//         return n * fac(n - 1);
// }

// 迭代的方式-非递归
//  int fac(int n)
//  {
//      int k = 1;
//      int i = 0;
//      for(i=1;i<=n;i++)
//      {
//          k *= i;
//      }
//      return k;
//  }

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = fac(n);
//     printf("ret = %d\n",ret);

//     return 0;
// }

// 求第n个斐波那契数列
//  int count = 0;

// int Fib(int n)
// {
//     if(n == 3)
//         count++;

//     if(n <= 2)
//         return 1;
//     else
//         return Fib(n - 1) + Fib(n - 2);
// }

// int Fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;

//     while(n>=3)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }

//     return c;
// }

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = Fib(n);
//     printf("%d\n",ret);
//    // printf("%d\n",count);

//     return 0;
// }

// void test(int n)
// {
//     if (n < 10000)
//        test(n + 1);
// }

// int main()
// {
//     test(1);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int i = 0;
//     for(i=0;i<10;i++)
//     {
//         if(i=5)
//           printf("%d",i);
//     }

//     return 0;
// }

// int main()
// {
//     int n = 0;
//     scanf("%d\n",&n);
//     switch(n)
//     {
//         default:
//             printf("呵呵\n");
//             break;
//         case 1:
//             printf("1\n");
//             break;
//         case 2:
//             printf("2\n");
//             break;
//     }
//     return 0;
// }

// int func(int a)
// {
//     int b;
//     switch(a)
//     {
//         case 1:
//             b = 30;
//         case 2:
//             b = 20;
//         case 3:
//             b = 16;
//         default :b = 0;
//     }
//     return b;

//     }

// int main()
// {

//     int len = func(arr);
//     printf("%d\n",len);
// }

// void Swap(int *px, int *py)
// {
//     int tmp = *px;
//     *px = *py;
//     *py = tmp;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     // 输入
//     scanf("%d %d %d", &a, &b, &c);
//     if (a < b)
//     {
//         Swap(&a, &b);
//     }
//     if (a < c)
//     {
//         Swap(&a, &c);
//     }
//     if (b < c)
//     {
//         Swap(&b, &c);
//     }

//     // 输出
//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int main()
// {
//     int i = 0;
//     // for (i = 1; i <= 100; i++)
//     // {
//     //     if (i % 3 == 0)
//     //     {
//     //         printf("%d ", i);
//     //     }
//     // }
//     for (i = 3; i <= 100; i += 3)
//         printf("%d ", i);

//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     int m = (a < b) ? a : b;

//     // while (1)
//     // {
//     //     if (a % m == 0 && b % m == 0)
//     //     {
//     //         break;
//     //     }
//     //     m--;
//     // }
//     int c = 0;
//     while (c = a % b)
//     {
//         a = b;
//         b = c;
//     }
//     printf("%d\n", b);

//     return 0;
// }

// 12 9 3
// a  b c
// 9  3 ?

// int main()
// {
//     int count = 0;
//     int i = 1;
//     for (i = 1; i <= 100; i++)
//     {
//         if (i / 10 == 9)
//         {
//             count++;
//         }
//         if (i % 10 == 9)
//         {
//             count++;
//         }
//     }
//     printf("count =  %d\n", count);

//     return 0;
// }

// int main()
// {
//     int i = 0;
//     double sum = 0;
//     int flag = 1;
//     for (i = 1; i <= 100; i++)
//     {
//         sum = sum + flag * (1.0 / i);
//         flag = -flag;
//     }
//     printf("%lf\n", sum);

//     return 0;
// }

// int main()
// {
//     int i = 0;
//     // 准备10个整数
//     int arr[10] = {0};
//     // 输入数字
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (i = 1; i < 10; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }

// 打印99乘法口诀
// 1*1=1
// 2*1=2 2*2=4
//
//
//
// int main()
// {
//     // 打印9行
//     int i = 0;
//     for (i = 1; i <= 9; i++)
//     {
//         // 打印一行
//         int j = 0;
//         for (j = 1; j <= i; j++)
//             printf("%d*%d=%2d ", i, j, i * j);
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     for (i = 1; i < 10; i++)
//     {
//         int l = 0;
//         for (l = 1; l <= i; l++)
//             printf("%d*%d=%2d ", i, l, i * l);

//         printf("\n");
//     }

//     return 0;
// }
// 实现一个函数，打印乘法口诀表，口诀表行列自己指定
// void print_table(int n)
// {
//     int i = 0;
//     for (i = 1; i <= n; i++)
//     {
//         int j = 0;
//         for (j = 1; j <= i; j++)
//             printf("%d*%d=%2d ", i, j, i * j);
//         printf("\n");
//     }
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     print_table(n);

//     return 0;
// }
