#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	for(i=b;i>=a;i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}
