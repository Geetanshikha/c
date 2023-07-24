#include<stdio.h>
int main()
{
	int i,j,c=1,d=0;
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
