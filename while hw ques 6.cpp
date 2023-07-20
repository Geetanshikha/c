#include<stdio.h>
int main()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);
	int count=0;
	while(num!=0)
	{
		count++;
		num=num/1;
	}
	printf("no of digit =%d",count);
	return 0;
}
