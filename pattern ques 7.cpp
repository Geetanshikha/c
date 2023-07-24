#include<stdio.h>
int main()
{
	int i,j,a,b,c=1;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%d ",c++);
		}
		printf("\n");
	}
	return 0;
}
