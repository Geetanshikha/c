#include<stdio.h>
int main()
{
	int num,temp;
	printf("enter num:");
	scanf("%d",&num);
	int rem=0;
	int sum=0;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}
