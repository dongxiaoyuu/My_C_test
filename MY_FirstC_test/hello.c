// ��¼һЩƽʱ����ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


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
//1-100������
void Game(){
	int data = rand()%100+1;
	int x;
	while (1) {
		printf("��һ��1-100֮�����:\n");
		scanf("%d",&x);
		if (x > data) {
			printf("�´���\n");
		}
		else if (x < data) {
			printf("��С��\n");
		}
		else {
			printf("�¶��ˣ����������%d\n", data);
			break;
		}
	}

}
//�������������е�����
int Search(int data) {
	int arr[10] = {1,3,5,7,8,13,16,17,23,45};
	int count = 0;
	for (int i = 0; i < 10; i++) {

		if (arr[i] != data) {
			count++;			
			continue;
		}
		else {
			printf("�ҵ��ˣ��������еĵ�%d����", i + 1);
			break;	
			
			}
		
		}
	if (count == 10) {
		printf("���ݲ�����");
	}
	return 0;
}
//������������������
void Change() {
	int a = 67;
	int b = 76;
	printf("����ǰa=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������a=%d,b=%d\n", a, b);
}
//����Զ����������ĳ˷���
int Custom_multi_tab(int a) {
	for (int i = 1; i <=a; i++) {
		for (int j = 1; j <=a; j++) {
			printf("%d * %d = %2d      ", i, j, i * j);

		}
		printf("\n");
	}
	return 0;
}
//ð������--��С����
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
	printf("\n�źú�");
	for (int k = 0; k < num; k++) {
		printf("%d ", arr[k]);
	}
	return 0;
}
// �������----��ʼ��\��ӡ\����

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
//��������
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
	printf("����ǰ��\n ");
	printf("����1:");
	Print(arr1, 9);
	printf("����2��");
	Print(arr2, 9);
	printf("\n������\n ");
	Swap_arr(arr1, arr2);
	printf("����1:");
	Print(arr1, 9);
	printf("����2��");
	Print(arr2, 9);





	/*Print(arr, num);
	Reverse(arr, num);
	Print(arr, num);*/


	/*printf("����ǰ��");
	for (int i = 0; i < num; i++) {
		printf("%d ",arr[i]);
	}
	Bubble_sort(arr,num);*/

	/*printf("���뿴���˼��ĳ˷���:");
	scanf("%d", &data);
	Custom_multi_tab(data);*/


	//Change();
	/*printf("����������ҵ�����:");
	scanf("%d", &data);
	Search(data);*/


	//Game();
	//Multi_tab();
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