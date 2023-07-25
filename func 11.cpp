#include<stdio.h>
int swap1(int a,int b);
int swap2(int num1,int num2);
int swap3(int num3,int num4,int c);
int main()
{
	int a,b,c,num1,num2,num3,num4;
	printf("enter a,b,c,num1,num2,num3,num4:");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&num1,&num2,&num3,&num4);
	int d=swap1(a,b);
	if(d)
	{
		a=a+b;
		b=a-b;
		a=a-b;
		printf("a=%d\n",a);
		printf("b=%d\n",b);
		printf("\n");
	}
	
	int e = swap2 (num1,num2);
	if(e)
	{
		num1=num1*num2;
		num2=num1/num2;
		num1=num1/num2;
		printf("a=%d\n",num1);
		printf("b=%d\n",num2);
		printf("\n");
	}
	int f = swap3 (num3,num4,c);
	if(f)
	{
		c=num3;
		num3=num4;
		num4=c;
		printf("a=%d\n",num3);
		printf("b=%d\n",num4);
		printf("\n");
	}
	return 0;
}
int swap1(int a,int b)
{
	return 1;	
}
int swap2(int num1,int num2)
{
	return 1;
}
int swap3(int num3,int num4,int c)
{	
	return 1;
}
