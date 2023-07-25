#include<stdio.h>
int add(int a,int b,int c,int d);
int main()
{
	int a,b,c,d;
	printf("enter a,b,c,d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int res=add(a,b,c,d);
	printf("sum=%d",res);
	return 0;
	
}
int add(int a,int b,int c,int d)
{
	int e;
	e=a+b+c+d;
	return e;
}
