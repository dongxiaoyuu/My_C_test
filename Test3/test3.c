#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//12.28以后的一些练习

//递归打印一个数的每一位
void print(unsigned int n)
{
    if (n > 9)
        print(n / 10);
    printf("%d ", n % 10);
}


//递归与非递归求阶乘,有bug
//递归
int  Fac(int N)
{
    if (N <= 1)
        return 1;

    return Fac(N - 1) * N;
}
//循环
int Fac2(int N)
{
    int ret = 1;
    for (int i = 2; i <= N; ++i)
    {
        ret *= i;
    }

    return ret;
}

//实现strlen的功能
//递归
int MyStrlen(char* str) {
    if ('\0' == *str)
        return 0;
    else
        return 1 + MyStrlen(1 + str);
}


void main() {

    char* str = "hello world";
    int res = 0;
    res = MyStrlen(str);
    printf(res);


    //print(9876978);
   /* int num=0;
    printf("Please input 1 number:");
    scanf("%d", &num);
    int res=0;
    res = Fac(num);
    printf(res);
    printf("\n");*/
    

    return 0;
}
