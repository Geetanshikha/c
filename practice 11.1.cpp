#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap value of a=%d\n",a);
	printf("the swap value of b=%d",b);
	return 0;
}
