#include<stdio.h>
int main()
{
	int i,j,c=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %d ",c+=2);
		}
		printf("\n");
	}
	return 0;
}
