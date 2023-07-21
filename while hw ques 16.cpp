#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		printf(" %d ",a);
		a+=2;
	}
	return 0;
}
