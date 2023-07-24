#include<stdio.h>
int main()
{
	int a=3,num=2;
	printf("enter a:");
	scanf("%d",&a);
	while(a>num)
	{
		if(a%num==0)
		{
			printf("not a prime");
			break;
		}
		if(a-1==num)
		{
			printf("prime number");
		}
		num++;
   }
   return 0;
}
