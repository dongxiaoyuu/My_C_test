#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Max(int a, int b) {
	if (a > b)
		return a;
	return b;
}


int main() {
	int a;
	int b;
	printf("请输入两个数：\n");
	scanf("%d %d", &a,&b);
	printf("比较大的数是：%d", Max(a, b));
	return 0;
}