#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("a=%d is max",a);
	}
	else
	{
		printf("b=%d is max",b);
	}
	return 0;
}
