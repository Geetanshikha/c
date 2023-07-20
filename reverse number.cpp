#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	int rem,sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("the reverse number =%d",sum);
	return 0;
}
