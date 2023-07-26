#include<stdio.h>
int add(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int sub(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int res1=add(a,b);
	printf("sum=%d\n",res1);
	int res2=mul(a,b);
	printf("mul=%d\n",res2);
	int res3=div(a,b);
	printf("div=%d\n",res3);
	int res4=mod(a,b);
	printf("mod=%d\n",res4);
	int res5=sub(a,b);
	printf("sub=%d",res5);
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int a,int b)
{
	int d;
	d=a*b;
	return d;
}
int div(int a,int b)
{
	int e;
	e=a/b;
	return e;
}
int mod(int a,int b)
{
	int g;
	g=a%b;
	return g;
}
int sub(int a,int b)
{
	int f;
	f=a-b;
	return f;
}
