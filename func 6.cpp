#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
int main()
{
	add();
	sub();
	mul();
	div();
	mod();
	return 0;
}
void add()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum=%d\n",c);
}
void sub()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("sub=%d\n",c);
}
void mul()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("mul=%d\n",c);
}
void div()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a/b;
	printf("div=%d\n",c);
}
void mod()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a%b;
	printf("mod=%d\n",c);
}
