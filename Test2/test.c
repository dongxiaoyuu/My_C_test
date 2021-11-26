//这部分包括后来的一些练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



/*test1
编程实现：两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
*/

int My_Xor(int a, int b) {
	int c = a ^ b;	
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if ((c >> i) & 1) {//&就是0&0=0
			count++;
		}
	}
	printf("%d和%d的二进制有%d位不一样。", a, b, count);
	return count;
}

/*
获取一个整数二进制序列中所有的偶数位和奇数位，
分别打印出二进制序列*/
void Odds_Even(int a) {
	printf("奇数位：");
	for (int i = 1; i < 32; i+=2) {
		printf("%d、", (a >> i) & 1);
	}
	printf("\n偶数位：");
	for (int j = 2; j <= 32; j += 2) {
		printf("%d、", (a >> j) & 1);
	}
}

/*统计二进制中1的个数*/
int How_many_1(int data) {
	int count = 0;
	while (data)
	{
		data = data & (data - 1);
		count++;
	}
	
	printf("有%d个1",count);
	return count;
}
void Change() {

	int a = 67;

	int b = 76;

	printf("交换前a=%d,b=%d\n", a, b);

	a = a ^ b;

	b = a ^ b;

	a = a ^ b;

	printf("交换后a=%d,b=%d\n", a, b);

}
int main() {
	int a;
	//int b;

	Change();

	//printf("input 1 number:");
	//scanf("%d", &a);  //&i 表示变量 i 的地址，&是取地址符
	//How_many_1(a);
	//Odds_Even(a);
	//My_Xor( a,  b);
	return 0;
}