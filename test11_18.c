/* #include<stdio.h>
int main()
{
	int age = 10;
	scanf("%d", &age);

	if (age < 18)
		printf("青少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老寿星\n");

	return 0;
}

/* 
int main()
{
	/*int age = 10;
	/*if (age < 18)
		printf("未成年\n");
	else
	{
		printf("成年\n");
		printf("打游戏\n");
	

	/*int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	    else
		    printf("haha\n");
	
		

	return 0;
}*/

/*int main()
{
		char first_name[20] = {0};
 
		return 0;
}


int main()
	{
		int a = 10;
		return 0;
	}

int test()
	{
		int a = 4;

		if (a == 3)
			return 1;
		else
		    return 0;
	}


int main()
	{
		int r = test();
		printf("%d\n", r);

		return 0;
	}


int main()
{
	int num = 3;
	if (5 == num)
		printf("hehe\n");

	return 0;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("奇数\n");
	else
		printf("No\n");

	return 0;
}

int main()
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 2 == 1)
			printf("%d ", num);
		num++;

	}
	return 0;
}

int main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 2 == 1)
			printf("%d ", num);
		num++;
	}
	return 0;
}






	if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	else if (4 == day)
		printf("星期四\n");
	else if (5 == day)
		printf("星期五\n");
	else if (6 == day)
		printf("星期六\n");
	else if (7 == day)
		printf("星期天\n");


	switch (day)
	{
		//case整形常量
	case 1:
			printf("星期一\n");
			break;
	case 2:
			printf("星期二\n");
			break;
	case 3:
			printf("星期三\n");
			break;
	case 4:
			printf("星期四\n");
			break;
	case 5:
			printf("星期五\n");
			break;
	case 6:
			printf("星期六\n");
			break;
	case 7:
			printf("星期天\n");
			break;

	}

	/*switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
	    break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("选择错误\n");
		break;
	}
	return 0;
}*/


int main()
{
	int n = 1;//2 3
	int m = 2;//3 4 5
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{ 
	    case 1:n++;
	    case 2:m++; n++;
		break;//自己所在的switch上
	    }
	case 4:
		m++;
		break;
	default:
		break;
	}

printf("m = %d,n = %d\n", m, n);
return 0;
}





//循环
int main()
{
	while (1)
	{
		printf("hehe\n");
	}
	return 0;
}


int main()
{
	int a = 1;
	while (a <= 10)
	{
		a++;
		if (5 == a)
		continue;

		printf("%d ", a);
		
	}

	return 0;
}
                

	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);*/

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/


	 
	/*char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	//getchar();
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N）：>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}*/

/*
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}

//'a';//
//%c 字符

int main()
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",73,32,99,97,110,32,100,111,32,105,116,33);
	return 0;
}

int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	//sizeof(arr）计算的数组的总大小，单位是字节
	//sizeof（arr[0])计算的是一个元素的大小
	int sz = sizeof(arr) / sizeof(arr[0]);

	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}



int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}

int main()
{
	//输入
	int a;
	scanf("%d", &a);
	//计算20050511
	int b = a % 100;
	int c = a % 1000 / 100;
	int d = a / 10000;
	printf("year=%d\n", d);
	printf("month=%d\n", c);
	printf("date=%d\n", b);
	return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	int data=0;
	scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%d\n", year);
	printf("month=02%d\n", month);
	printf("data=02%d", data);
	return 0;
}

} */