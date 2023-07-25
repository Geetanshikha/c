#include<stdio.h>
int odd_even(int num);
int reverse(int num,int rem,int sum);
int palindrome(int num,int rem,int sum,int temp);
int armstrong(int num,int rem,int sum,int temp);
int primenum(int a,int b);
int main()
{
	int num,a;
	printf("enter num:");
	scanf("%d",&num);
	printf("enter a:");
	scanf("%d",&a);
	int d=odd_even(num);
	if(d)
	{
		printf("it is even\n");
	}
	else
	{
		printf("it is odd\n");
	}
	int f=reverse(num,0,0);
	printf("%d\n",f);
	int g=palindrome(num,0,0,0);
	if(g)
	{
		printf("it is a palindrome\n");
	}
	else
	{
		printf("it is not a  palindrome\n");
	}
	int e=armstrong(num,0,0,0);
	if(e)
	{
		printf("it is an armstrong number\n");
	}
	else
	{
		printf("it is not an armstrong\n");
	}
	int h=primenum(a,2);
	if(h)
	{
		printf("it is not prime\n");
	}
	else
	{
		printf("it is a prime\n");
	}
	return 0;
}
int odd_even(int num)
{
	if(num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int reverse(int num,int rem,int sum)
{
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	return sum;
}
int palindrome(int num,int rem,int sum,int temp)
{
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp==sum)
	{
        return 1;	
	}
	else
	{
		return 0;
	}
}
int armstrong(int num,int rem,int sum,int temp)
{
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int primenum(int a,int b)
{
	while(a>b)
	{
		if(a%b==0)
		{
			return 1;
			break;
		}
		if(a-1==b)
		{
			return 0;
		}
		b++;
	}
}
