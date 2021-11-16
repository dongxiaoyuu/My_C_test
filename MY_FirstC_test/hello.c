// 记录一些平时的练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


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
int Three() {

}


int main() {
	int a;
	int b;
	int c;


	printf("请输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	Sort(a, b, c);

	/*printf("请输入两个数：\n");
	scanf("%d %d", &a,&b);
	printf("比较大的数是：%d", Max(a, b));*/
	return 0;
}