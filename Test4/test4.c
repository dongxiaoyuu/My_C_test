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
//strcpy的实现
char* my_strcpy(char* dst, const char* src)
{
	char* cp = dst;
	while (*cp++ = *src++);
	return(dst);
}
//调整奇数偶数顺序:
/*输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。*/
void The_order(int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right)
	{

		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}


		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}

	}
}

//杨辉三角
void Yang(int n) {
	int data[30][30] = { 1 };
	for (int i = 1; i < n; i++) //从第二行开始填
	{
		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
		for (int j = 1; j <= i; j++) //从第二列开始填
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
		}
	}

	for (int i = 0; i < n; i++) //填完打印
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}
//猜凶手

void Murderer() {
	int murderer = 0;
	for (murderer = 'a'; murderer <= 'd'; murderer++)
	{
		if ((murderer != 'a') + (murderer == 'c') + (murderer == 'd') + (murderer!= 'd') == 3)
			printf("凶手是：%c", murderer);
	}
}

//猜名次
void Order() {
	int person[5] = { 0 };
	for (person[0] = 1; person[0] <= 5; person[0]++) {
		for (person[1] = 1; person[0] <= 5; person[1]++) {
			for (person[2] = 1; person[0] <= 5; person[2]++) {
				for (person[3] = 1; person[0] <= 5; person[3]++) {
					for (person[4] = 1; person[0] <= 5; person[4]++) {
						if (((person[1] == 2) + (person[0] == 3)) == 1 &&
							((person[1] == 2) + (person[0] == 4)) == 1 &&
							((person[2] == 1) + (person[0] == 2)) == 1 &&
							((person[2] == 5) + (person[0] == 3)) == 1 &&
							((person[4] == 4) + (person[0] == 1)) == 1) {
							if (person[0] * person[1] * person[2] * person[3] * person[4] == 120) {
								printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\n", person[0], person[1], person[2], person[3], person[4]);
							}
						}
					}
				}
			}
		}
	}
}


void main(){
	Order();
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
	The_order(arr, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/


	/*char str[] = "hello world";	
	char str2[] = "today today";
	int my_str = my_strcpy(str, str2);
	printf("str:%s\nstr2:%s", str, str2);*/

	
	//Reverse(str);


	//Yang(10);

	//Murderer();



}