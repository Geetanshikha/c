#include<stdio.h>
int main()
{
	int num,temp;
	int rem,sum=0;
	printf("enter num:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("it is an armstrong number");
	}
	else
	{
		printf("it is not an armstrong number");
	}
	return 0;
}
