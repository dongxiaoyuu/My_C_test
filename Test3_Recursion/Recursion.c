//递归专项训练
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//递归求阶乘
int Fac(int num) {
	if (num <= 1) {
		return 1;
	}
	return Fac(num - 1) * num;
}
int Fac2(int num) {
	int ret = 1;
	for (int i = 2; i <= num; ++i)
	{
		ret *= i;
	}

	return ret;
}

//strlen()的实现
int my_strlen0(char* str) {
	if ('\0' == *str)
		return 0;
	else
		return 1 + my_strlen(1 + str);
}

int my_strlen(char* str)
{
	int count = 0;
	while ('\0' != *str)
	{
		count++;
		str++;
	}
	return count;
}

//递归的逆序
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}
 
void main() {


	char arr[] = "hello world";
	int res = my_strlen0(arr);
	reverse_string(arr);
	//printf("%d",res);

	/*int res = Fac(5);
	int res2 = Fac2(6);
	printf("%d\n", res);
	printf("%d\n", res2);*/
	

}