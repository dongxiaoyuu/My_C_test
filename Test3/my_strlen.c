#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ʵ��strlen�Ĺ���
//�ݹ�

int MyStrlen(char*str) {
	if ('\0' == *str)
		return 0;
	else
		return 1 + MyStrlen(1 + str);
}

