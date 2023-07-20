#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter a,b,c,d,e:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e)
	{
		printf("a=%d is max",a);
	}
	else if(b>a && b>c && b>d && b>e)
	{
		printf("b=%d is max",b);
	}
	else if(c>a && c>b && c>d && c>e)
	{
		printf("c=%d is max",c);
	}
	else if(d>a && d>b && d>c && d>e)
	{
		printf("d=%d is max ",d);
	}
	else if (e>a && e>b && e>c && e>d)
	{
		printf("e=%d is max ",e);
	}
	else 
	{
		printf("all are equal");
	}
	return 0;
}
