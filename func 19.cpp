#include<stdio.h>
int add();
int main()
{
	int e=add();
	printf("%d",e);
	return 0;
}
int add()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}
