#include<stdio.h>
void div(int a,float b);
void mul(int a,float b);
int main()
{
	int a;
	float b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%f",&b);
	div(a,b);
	mul(a,b);
	return 0;
}
void div(int a,float b)
{
	float c;
	c=a/b;
	printf("%f\n",c);
	
}
void mul(int a,float b)
{
	float c;
	c=a*b;
	printf("%f\n",c);
}
