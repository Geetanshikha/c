#include<stdio.h>
int main()
{
	int num;
	int i=1,fact=1;
	printf("enter num:");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of a number=%d",fact);
	return 0;
}
