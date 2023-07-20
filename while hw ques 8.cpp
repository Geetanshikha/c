#include<stdio.h>
int main()
{
	int i=0;
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	while(i<=10)
	{
		b=a*i;
		printf(" %d * %d = %d\n ",a,i,b);
		i++;
	}
	return 0;
}
