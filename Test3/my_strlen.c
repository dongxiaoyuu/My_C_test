#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//实现strlen的功能
//递归

int MyStrlen(char*str) {
	if ('\0' == *str)
		return 0;
	else
		return 1 + MyStrlen(1 + str);
}

