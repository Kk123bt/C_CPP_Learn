#include <stdio.h>

// int main()
// {
//     printf("小乖要天天开心呀\n");
//     printf("\n");
//     printf("    \n");
//     printf("          ***           ***\n");
//     printf("      ***********   **********\n");
//     printf("    ****************************\n");
//     printf("    ****************************\n");
//     printf("      ************************\n");
//     printf("       **********************\n");
//     printf("        *******************\n");
//     printf("         *****************\n");
//     printf("           **************\n");
//     printf("             **********\n");
//     printf("                ***** \n");
//     printf("   \n");
//     printf("   \n");
//     printf("   \n");
//     printf("                             \n");

//     return 0;
// }
// 形参1数组，2指针
void bubble_sort(int arr[], int sz)
{
    // 趟数

    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        // 一趟冒泡排序
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // 冒泡排序
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    int i = 0;

    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}