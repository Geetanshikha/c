#include<stdio.h>
int main()
{
	int a,i,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	for(a>0;a<=b;a++)
	{
		for(i=0;i<=10;i++)
		{
			c=a*b;
			printf("%d*%d=%d\n",a,b,c);
		}
		printf("\n");
	}
	return 0;
}
