#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int mystrlen(char* str)   //���յ�Ϊ�ַ��������ַ��ĵ�ַ
{
	if (*str != '\0')
		return 1 + mystrlen(str + 1);
	else
		return 0;






}

int main()
{
	char arr[] = "abc" ;
	int len = mystrlen(arr);
	printf("%d", len);







	return 0;
}