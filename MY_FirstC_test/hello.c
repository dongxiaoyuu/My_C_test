// 记录一些平时的练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//比大小
int Max(int a, int b) {
	if (a > b)
		return a;
	return b;
}
//三个整数从大到小的输出
int Sort(int a, int b, int c) {

	int temp=0;
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	if (a < c) {
		temp = c;
		c = a;
		a = temp;
	}
	if (b < c) {
		temp = c;
		c = b;
		b = temp;
	}
	printf("从大到小输出为：%d %d %d", a, b, c);
	return 0;

}

//1-100内3的倍数
void Three() {
	int i = 1;
	while (i<=100) {		
		if (i % 3 == 0) {
			printf("%d\t", i);
		}
		i++;
	}

}
//给定两个数求最大公约数
int Common_divisor(int a,int b) {
	while ((a-b)!=0) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a; 
		}

	}
	return b;
}

//求1000-2000之间的闰年
void Leap() {
	int year = 1000;
	while (year<=2000) {
		if (year % 4 == 0 && year % 100 != 0 ||year%400==0) {
			printf("%d年\t",year);
		}
		year++;
	}
}
//100-200之间的素数
void Prime() {
	int count = 0;
	for (int i = 101; i <= 200; i++) {
		
		int j = 0;
		for ( j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			count++;
			printf("%d\t", i);
		}
		
	}
	printf("\n有%d个素数\n", count);
}
//1-100里有多少个9
void Nine() {
	int count = 1;
	for (int i = 1; i <= 100; i++) {

		if (i % 10 == 9) {
			count++;
		}
		

	}
	printf("1-100里有%d个9", count);
}
//分数求和
void Add() {
	int n = 1;
	double res = 0.0;
	int flag = 1;
	while (n<=100) {
		res += flag * 1.0 / n;//为什么这里得是1.0
		flag = -flag;
		n++;
	}
	printf("结果是%f", res);
}
//比较10个数中的最大值
void Ten_max() {
	int arr[10] = { 2,3,5,34,77,65,0,14,-1,40 };
	int temp = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[0] < arr[i + 1]) {
			temp = arr[0];
			arr[0] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	printf("最大值为%d", arr[0]);
}
//输出99乘法表
void Multi_tab() {
	for (int i = 1; i < 10; i++) {			
		for (int j = 1; j < 10; j++) {		
			printf("%d * %d = %2d      ", i, j, i * j);
			
		}		
		printf("\n");
	}
}
//1-100猜数字
void Game(){
	int data = rand()%100+1;
	int x;
	while (1) {
		printf("猜一个1-100之间的数:\n");
		scanf("%d",&x);
		if (x > data) {
			printf("猜大了\n");
		}
		else if (x < data) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了，这个数就是%d\n", data);
			break;
		}
	}

}
//查找有序数组中的数字
int Search(int data) {
	int arr[10] = {1,3,5,7,8,13,16,17,23,45};
	int count = 0;
	for (int i = 0; i < 10; i++) {

		if (arr[i] != data) {
			count++;			
			continue;
		}
		else {
			printf("找到了，是数组中的第%d个数", i + 1);
			break;	
			
			}
		
		}
	if (count == 10) {
		printf("数据不存在");
	}
	return 0;
}
//交换两个整数的内容
void Change() {
	int a = 67;
	int b = 76;
	printf("交换前a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后a=%d,b=%d\n", a, b);
}
//输出自定义行列数的乘法表
int Custom_multi_tab(int a) {
	for (int i = 1; i <=a; i++) {
		for (int j = 1; j <=a; j++) {
			printf("%d * %d = %2d      ", i, j, i * j);

		}
		printf("\n");
	}
	return 0;
}
//冒泡排序--从小到大
int Bubble_sort(int arr[],int num) {


	int temp = 0;
	for (int i = 0; i < num-1; i++) {
		for (int j = 0; j < num-i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;		

			}
		}
	}
	printf("\n排好后：");
	for (int k = 0; k < num; k++) {
		printf("%d ", arr[k]);
	}
	return 0;
}
// 数组操作----初始化\打印\逆置

void Init(int arr[], int num) {

	for (int i = 0; i < num; i++) {

		arr[i] = 0;

	}

}

int Print(int arr[], int num) {

	for (int i = 0; i < num; i++) {

		printf("%d ", arr[i]);

	}

	printf("\n");

}

int Reverse(int arr[], int num) {

	int left = 0;

	int right = num - 1;

	while (left < right) {

		int temp = arr[left];

		arr[left] = arr[right];

		arr[right] = temp;

		left++;

		right--;

	}

	return arr;

}
//交换数组
void Swap_arr(int a[], int b[]) {
	for (int i = 0; i < 10; i++) {
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main() {
	int a;
	int b;
	int c;
	int data;

	
	int arr1[] = { 7,2,3,33,0,65,34,34,100 };
	int num = sizeof(arr1) / sizeof(arr1[0]);	
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	printf("交换前：\n ");
	printf("数组1:");
	Print(arr1, 9);
	printf("数组2：");
	Print(arr2, 9);
	printf("\n交换后：\n ");
	Swap_arr(arr1, arr2);
	printf("数组1:");
	Print(arr1, 9);
	printf("数组2：");
	Print(arr2, 9);





	/*Print(arr, num);
	Reverse(arr, num);
	Print(arr, num);*/


	/*printf("排序前：");
	for (int i = 0; i < num; i++) {
		printf("%d ",arr[i]);
	}
	Bubble_sort(arr,num);*/

	/*printf("你想看几乘几的乘法表:");
	scanf("%d", &data);
	Custom_multi_tab(data);*/


	//Change();
	/*printf("请输入想查找的数据:");
	scanf("%d", &data);
	Search(data);*/


	//Game();
	//Multi_tab();
	//Ten_max();

	//Add();
	//Nine();
	//Prime();
	//Leap();

	/*printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	printf("这两个数的最大公约数为：%d\n", Common_divisor(a,b));*/


	/*printf("100以内3的倍数有：");
	Three();*/

	/*printf("请输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	Sort(a, b, c);*/

	/*printf("请输入两个数：\n");
	scanf("%d %d", &a,&b);
	printf("比较大的数是：%d", Max(a, b));*/
	
}