#include<stdio.h>
int main()
{
	int i,j,a;
	printf("enter a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
