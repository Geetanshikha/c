#include<stdio.h>
//func declare
int show(int a,int b);
int main()
{
	int res=show(2,3);
	printf("%d",res);
	return 0;
}
//func define
int show(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
