#include<stdio.h>
void add(int a,float b);
int main()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	float b;
	printf("enter b:");
	scanf("%f",&b);
	add(a,b);
	return 0;
}
void add(int a,float b)
{
	float c;
	c=a+b;
	printf("%f",c);
}
