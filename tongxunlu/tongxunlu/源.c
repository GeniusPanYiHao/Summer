#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	extern int iExtern;
	printf("%d", iExtern);
	return 0;
}


