#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num%3==0 && num%5 ==0 && num%7==0 ) 
	{
		printf("it can be ""divided"" by 3,5,7");
	}
	else 
	{
		printf("it can't be ""divided"" by 3,5,7");
	}
	return 0;
}