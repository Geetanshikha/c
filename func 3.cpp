#include<stdio.h>
int show(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int d=show(a,b);
	printf("sum=%d",d);
	return 0;
}
int show(int a,int b)
{
	int c;
	c=a+b;
	return c; 
}
