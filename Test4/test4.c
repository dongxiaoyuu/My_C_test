//练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//计算求和
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
int My_sum(int a,int n) {
	int tmp=0;
	
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	return sum;
}
//水仙花数
void Daffo() {
	int i = 0;
	for (i = 0; i <= 99999; i++) {
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
}
//打印菱形
void Rhombus() {
	int line = 0;
	int i = 0;
	printf("input a number:\n");
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//喝汽水
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水（编程实现）。
void Drink() {
	int money = 0;
	int total = 0;
	int empty = 0;

	printf("input money:\n");
	scanf("%d", &money);

	
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}


	printf("You can drink %d bottles of drink", total);
}

//使用指针打印数组
void Print(int* arr, int Len) {
	for (int i = 0; i < Len; i++) {
		printf("%d ", *arr);
		++arr;
	}
}
//字符串逆序
void Reverse(char *str) {
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
	printf("%s", str);
}
void main() {
	/*int a, n;
	printf("Please input 2 numbers:\n");
	scanf("%d %d", &a, &n);
	int sum = 0;
	sum = My_sum(a, n);
	printf("%d", sum);*/
	//Daffo();
	//Rhombus();
	//Drink();

	/*int arr[10] = { 1,2,3,4,5,6,7,8,3,32 };
	Print(arr, 10);*/


	char str[] = "hello world";	
	Reverse(str);

}