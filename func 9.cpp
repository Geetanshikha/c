#include<stdio.h>
int voter(int age);
int main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	int b=voter(age);
	if(b)
	{
		printf("it is eligible to vote");
	}
	else
	{
		printf("it is not eligible to vote");
	}
	return 0;	
}
int voter(int age)
{
	if(age>18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

