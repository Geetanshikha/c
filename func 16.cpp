#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	float b;
	printf("enter b:");
	scanf("%f",&b);
	float c;
	c=a+b;
	printf("%f",c);
}
