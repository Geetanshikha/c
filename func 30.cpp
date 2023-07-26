#include<stdio.h>
void add();
void multi();
void div();
void modular();
void sub();
int main()
{
	add();
	multi();
	div();
	modular();
	sub();
	return 0;
}
void add()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int c;
	c=a+b;
	printf("sum=%d\n",c);
}
void multi()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int d;
	d=a*b;
	printf("multi=%d\n",d);
}
void div()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int e;
	e=a/b;
	printf("div=%d\n",e);
}
void modular()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int f;
	f=a%b;
	printf("mod=%d\n",f);
}
void sub()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int g;
	g=a-b;
	printf("sub=%d",g);
}
