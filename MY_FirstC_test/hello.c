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
	printf("��������������\n");
	scanf("%d %d", &a,&b);
	printf("�Ƚϴ�����ǣ�%d", Max(a, b));
	return 0;
}