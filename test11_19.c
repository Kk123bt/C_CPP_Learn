#include <stdio.h>

// void print(unsigned int n)
// {
//     if(n>9)
//     {
//         print(n / 10);
//     }
//     printf("%d ",n % 10);
// }

// int main()
// {
//     unsigned int num = 0;
//     scanf("%u",&num);
//     print(num);
    

//     return 0;
// }

// #include<string.h>

// int my_strlen(char* str)
// {
//     int count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++; 
//     }
//     return count;

// }  

// int main()
// {
//     char arr[] = "abc";
//     int len = my_strlen(arr);//字符串
//     printf("%d\n",len);

//     return 0;
// }

// #include <string.h>

// int main()
// {
//     char arr[] = {'b', 'i', 't'};
//     printf("%d\n", strlen(arr));
// 	return 0;
// }
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{ 
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//
//	int c = Add(a, b);
// 
//	printf("%d\n", c);
//
//	Swap(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//
//	return 0;
//}





//
//int main()
//{
//	int i= 0;
//	for (i=100;i<=200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i- - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//            printf("%d ",i);
//		}
//			
//	}
//	
//
//	return 0;
//}
//#include<math.h>
//int is_prime(int n)
//{
//	
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//			
//	}
//	return 0;
//}
//#include<math.h>
//
//int Pdss(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		if (Pdss(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int pd(int y)
//{
//	if (y % 4 == 0 && y / 100 != 0)
//	    return 1;
//	else
//	    return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (pd(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//找到了返回下标
//	//找不到返回-1
//	int sz = sizeof(arr) / sizeof (arr[0]);
//	int ret = search(arr,k,sz);   
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n",ret);
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//#include<string.h>
//
//int main()
//{
//	/*int fs = strlen("abcdef");
//	printf("%d\n", fs);*/
//
//	printf("%d",printf("%d",printf("%d", 43)) );
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//函数的定义和声明

#include"add.h"
#include"sub.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	int ret = Sub(a, b);
	printf("%d\n", ret);

	return 0;
}
