// ��¼һЩƽʱ����ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


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
void Three() {
	int i = 1;
	while (i<=100) {		
		if (i % 3 == 0) {
			printf("%d\t", i);
		}
		i++;
	}

}
//���������������Լ��
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

//��1000-2000֮�������
void Leap() {
	int year = 1000;
	while (year<=2000) {
		if (year % 4 == 0 && year % 100 != 0 ||year%400==0) {
			printf("%d��\t",year);
		}
		year++;
	}
}
//100-200֮�������
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
	printf("\n��%d������\n", count);
}
//1-100���ж��ٸ�9
void Nine() {
	int count = 1;
	for (int i = 1; i <= 100; i++) {

		if (i % 10 == 9) {
			count++;
		}
		

	}
	printf("1-100����%d��9", count);
}
//�������
void Add() {
	int n = 1;
	double res = 0.0;
	int flag = 1;
	while (n<=100) {
		res += flag * 1.0 / n;//Ϊʲô�������1.0
		flag = -flag;
		n++;
	}
	printf("�����%f", res);
}
//�Ƚ�10�����е����ֵ
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
	printf("���ֵΪ%d", arr[0]);
}
//���99�˷���
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

	/*printf("��������������");
	scanf("%d %d", &a, &b);
	printf("�������������Լ��Ϊ��%d\n", Common_divisor(a,b));*/


	/*printf("100����3�ı����У�");
	Three();*/

	/*printf("��������������");
	scanf("%d %d %d", &a, &b, &c);
	Sort(a, b, c);*/

	/*printf("��������������\n");
	scanf("%d %d", &a,&b);
	printf("�Ƚϴ�����ǣ�%d", Max(a, b));*/
	
}