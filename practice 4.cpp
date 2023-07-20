#include<stdio.h>
int main()
{
	int a ,b ,c;
	printf("enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf(" a=%d is max",a);
	}
	else if(b>c && b>a)
	{
		printf("b=%d is max",b);
	}
	else if(c>a && c>b)
	{
		printf("c=%d is max",c);
	}
	else
	{
		printf("they all are equal");
	}
	return 0;
}
