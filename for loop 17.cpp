#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter a:");
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
		b=a*i;
		printf("%d*%d=%d\n",a,i,b);
	}
	return 0;
}
