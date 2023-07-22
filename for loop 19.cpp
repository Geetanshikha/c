#include<stdio.h>
int main()
{
	int a,b=0,i;
	for(a=0;a<=10;a++)
	{
		for(i=0;i<=10;i++)
		{
			b=a*i;
			printf("%d*%d=%d\n",a,i,b);
		}
		printf("\n");
	}
	return 0;
}
