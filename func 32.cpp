#include<stdio.h>
int add();
int mul();
int div();
int mod();
int sub();
int main()
{
	int k=add();
	printf("sum=%d\n",k);
	int l=mul();
	printf("mul=%d\n",l);
	int m=div();
	printf("div=%d\n",m);
	int n=mod();
	printf("mod=%d\n",n);
	int h=sub();
	printf("sub=%d",h);
	
	return 0;
}
int add()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int c;
	c=a+b;
	return c;
}
int mul()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int d;
	d=a*b;
	return d;
}
int div()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int e;
	e=a/b;
	return e;
}
int mod()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int f;
	f=a%b;
	return f;
}
int sub()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int g;
	g=a-b;
	return g;
}
