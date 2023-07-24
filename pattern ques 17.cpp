#include<stdio.h>
int main()
{
	int i,j,c=0,d=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1||i==3)
			{
				printf(" %d ",c);
			}
			else 
			{
				printf(" %d ",d);
			}
		}
		printf("\n");
	}
	return 0;
}
