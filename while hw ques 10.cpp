#include<stdio.h>
int main()
{
	int num=0;
	printf("enter num:");
	scanf("%d",&num);
	while(num<=10 && num%2!=0)
	{
		printf(" %d ",num);
		num++;
	}
	return 0;
}

