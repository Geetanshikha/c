#include<stdio.h>
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num%7==0 || num%3==0)
	{
		printf("divisible");
	}
	else
	{
		printf("not divisible");
	}
	return 0;
}
