#include<stdio.h>
void add(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void mod(int a,int b);
void sub(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	add(a,b);
	mul(a,b);
	div(a,b);
	mod(a,b);
	sub(a,b);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum=%d\n",c);
}
void mul(int a,int b)
{
	int d;
	d=a*b;
	printf("mul=%d\n",d);
}
void div(int a,int b)
{
	int e;
	e=a/b;
	printf("div=%d\n",e);
}
void mod(int a,int b)
{
	int f;
	f=a%b;
	printf("mod=%d\n",f);
}
void sub(int a,int b)
{
	int g;
	g=a-b;
	printf("sub=%d\n",g);
}
