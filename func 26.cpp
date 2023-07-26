#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	double a;
	long b;
	double c;
	printf("enter a,b:");
	scanf("%lf %li",&a,&b);
	c=a+b;
	printf("%lf",c);
}
