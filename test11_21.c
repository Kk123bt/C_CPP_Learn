#include <stdio.h>
// void test(int arr[])
// {
//     arr[0] = 3;
//     arr[1] = 4;
// }

// int main()
// {
//     int arr[2]={0};
//     test(arr);

//     return 0;
// }
// int a = 0;
// int b = 0;

// void test(int *px, int *py)
// {
//     *px = 3;
//     *py = 4;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;

//     test(&a, &b);
//     printf("a=%d b=%d", a, b);

//     return 0;
// }
// 实现找出100-200之间的素数
// int main()
// {
//     int i = 0;
//     for (i = 100; i <= 200; i++)
//     {
//         int j = 0;
//         for (j = 2; j < i; j++)
//         {
//             if (i % j != 0)
//                 printf("%d ", i);
//             break;
//         }
//     }

//     return 0;

// 输出1000-2000之间的闰年

// int main()
// {
//     int i = 0;
//     for (i = 1000; i <= 2000; i++)
//     {
//         if (i % 4 == 0 && i % 100 != 0)
//             printf("%d ", i);
//     }

//     return 0;
// }

// int main()
// {
//     int arr[10];
//     char ch[5];
//     double date1[20];
//     double date2[15+5];

//     char ch1[10]={'a','b','c'};
//     char ch2[10]="abc "
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     // printf("%d\n", arr[4]);
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     for (i = 0; i < sz; i++)
//     {
//         printf("&arr[%d] = %p\n", i, &arr[i]);
//     }

//     return 0;
// }
// 二维数组
int main()
{
    // int arr[3][4]={{1,2},{2,3},{5,6}};
    // char arr2[5][10];

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("&arr[i][j] = %p\n", &arr[i][j]);
        }
    }

    return 0;
}