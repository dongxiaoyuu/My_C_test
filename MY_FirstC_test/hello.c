// 记录一些平时的练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


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

int main() {
	int a;
	int b;
	int c;

	Multi_tab();
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