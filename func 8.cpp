#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	int c=add(a,b);
	int d=sub(a,b);
	int e=mul(a,b);
	int f=div(a,b);
	int g=mod(a,b);
	printf("sum=%d sub=%d mul=%d div=%d mod=%d",c,d,e,f,g);
	return 0;
}
int add(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
int sub(int a,int b)
{
	int res;
	res=a-b;
	return res;
}
int mul(int a,int b)
{
	int res;
	res=a*b;
	return res;
}
int div(int a,int b)
{
	int res;
	res=a/b;
	return res;
}
int mod(int a,int b)
{
	int res;
	res=a%b;
	return res;
}

