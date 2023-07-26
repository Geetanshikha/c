#include<stdio.h>
void div();
void mul();
int main()
{
	div();
	mul();
	return 0;
}
void div()
{
	int a;
	float b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%f",&b);
	c=a/b;
	printf("%f\n",c);
	
}
void mul()
{
	int a;
	float b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%f",&b);
	c=a*b;
	printf("%f",c);
}
