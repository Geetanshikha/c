#include<stdio.h>
void swap1();
void swap2();
void swap3();
int main()
{
	swap1();
	swap2();
	swap3();
	return 0;
}
void swap1()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d\n",a,b);
}
void swap2()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a=%d b=%d\n",a,b);
}
void swap3()
{
	int a,b,c;
	printf("enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	c=a;
	a=b;
	b=c;
	printf("a=%d b=%d\n",a,b);
}
