// ��¼һЩƽʱ����ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�ȴ�С
int Max(int a, int b) {
	if (a > b)
		return a;
	return b;
}
//���������Ӵ�С�����
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
	printf("�Ӵ�С���Ϊ��%d %d %d", a, b, c);
	return 0;

}

//1-100��3�ı���
int Three() {

}


int main() {
	int a;
	int b;
	int c;


	printf("��������������");
	scanf("%d %d %d", &a, &b, &c);
	Sort(a, b, c);

	/*printf("��������������\n");
	scanf("%d %d", &a,&b);
	printf("�Ƚϴ�����ǣ�%d", Max(a, b));*/
	return 0;
}