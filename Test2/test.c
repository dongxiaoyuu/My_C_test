//�ⲿ�ְ���������һЩ��ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



/*test1
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
*/

int My_Xor(int a, int b) {
	int c = a ^ b;	
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if ((c >> i) & 1) {//&����0&0=0
			count++;
		}
	}
	printf("%d��%d�Ķ�������%dλ��һ����", a, b, count);
	return count;
}

/*
��ȡһ���������������������е�ż��λ������λ��
�ֱ��ӡ������������*/
void Odds_Even(int a) {
	printf("����λ��");
	for (int i = 1; i < 32; i+=2) {
		printf("%d��", (a >> i) & 1);
	}
	printf("\nż��λ��");
	for (int j = 2; j <= 32; j += 2) {
		printf("%d��", (a >> j) & 1);
	}
}

/*ͳ�ƶ�������1�ĸ���*/
int How_many_1(int data) {
	int count = 0;
	while (data)
	{
		data = data & (data - 1);
		count++;
	}
	
	printf("��%d��1",count);
	return count;
}
void Change() {

	int a = 67;

	int b = 76;

	printf("����ǰa=%d,b=%d\n", a, b);

	a = a ^ b;

	b = a ^ b;

	a = a ^ b;

	printf("������a=%d,b=%d\n", a, b);

}
int main() {
	int a;
	//int b;

	Change();

	//printf("input 1 number:");
	//scanf("%d", &a);  //&i ��ʾ���� i �ĵ�ַ��&��ȡ��ַ��
	//How_many_1(a);
	//Odds_Even(a);
	//My_Xor( a,  b);
	return 0;
}