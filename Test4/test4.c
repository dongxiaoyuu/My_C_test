//��ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//�������
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
int My_sum(int a,int n) {
	int tmp=0;
	
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	return sum;
}
//ˮ�ɻ���
void Daffo() {
	int i = 0;
	for (i = 0; i <= 99999; i++) {
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
}
//��ӡ����
void Rhombus() {
	int line = 0;
	int i = 0;
	printf("input a number:\n");
	scanf("%d", &line);//7
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//����ˮ
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ�����ʵ�֣���
void Drink() {
	int money = 0;
	int total = 0;
	int empty = 0;

	printf("input money:\n");
	scanf("%d", &money);

	
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}


	printf("You can drink %d bottles of drink", total);
}

//ʹ��ָ���ӡ����
void Print(int* arr, int Len) {
	for (int i = 0; i < Len; i++) {
		printf("%d ", *arr);
		++arr;
	}
}
//�ַ�������
void Reverse(char *str) {
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
	printf("%s", str);
}
//strcpy��ʵ��
char* my_strcpy(char* dst, const char* src)
{
	char* cp = dst;
	while (*cp++ = *src++);
	return(dst);
}
//��������ż��˳��:
/*����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�*/
void The_order(int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right)
	{

		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}


		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}

	}
}

//�������
void Yang(int n) {
	int data[30][30] = { 1 };
	for (int i = 1; i < n; i++) //�ӵڶ��п�ʼ��
	{
		data[i][0] = 1; //ÿ�еĵ�һ�ж�û������ֱ�Ӹ�1����֤����Խ�硣
		for (int j = 1; j <= i; j++) //�ӵڶ��п�ʼ��
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //���Ʒ���
		}
	}

	for (int i = 0; i < n; i++) //�����ӡ
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}
//������

void Murderer() {
	int murderer = 0;
	for (murderer = 'a'; murderer <= 'd'; murderer++)
	{
		if ((murderer != 'a') + (murderer == 'c') + (murderer == 'd') + (murderer!= 'd') == 3)
			printf("�����ǣ�%c", murderer);
	}
}

//������
void Order() {

}


void main(){
	/*int a, n;
	printf("Please input 2 numbers:\n");
	scanf("%d %d", &a, &n);
	int sum = 0;
	sum = My_sum(a, n);
	printf("%d", sum);*/
	//Daffo();
	//Rhombus();
	//Drink();

	/*int arr[10] = { 1,2,3,4,5,6,7,8,3,32 };
	The_order(arr, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/


	/*char str[] = "hello world";	
	char str2[] = "today today";
	int my_str = my_strcpy(str, str2);
	printf("str:%s\nstr2:%s", str, str2);*/

	
	//Reverse(str);


	//Yang(10);

	Murderer();



}