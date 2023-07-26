#include<stdio.h>
#include<math.h>
int add(int a,int b,float c,float d,long e);
int sub(int a,int b,float c,float d,long e);
int mul(int a,int b,float c,float d,long e);
int div(int a,int b,float c,float d,long e);
int mod(int a,int b,float c,float d,long e);
int main()
{
	int a,b;
	float c,d;
	long e;
	printf("enter a,b,c,d,e:");
	scanf("%d %d %f %f %li",&a,&b,&c,&d,&e);
	int l=add(a,b,c,d,e);
	printf("sum=%d\n",l);
	int m=sub(a,b,c,d,e);
	printf("sub=%d\n",m);
	int n=mul(a,b,c,d,e);
	printf("mul=%d\n",n);
	int o=div(a,b,c,d,e);
	printf("div=%d\n",o);
	int p=mod(a,b,c,d,e);
	printf("mod=%d\n",p);
	return 0;
}
int add(int a,int b,float c,float d,long e)
{
    long res;
	res=a+b+c+d+e;
	return res;
}
int sub(int a,int b,float c,float d,long e)
{
	long res1;
	res1=a-b-c-d-e;
	return res1;
}
int mul(int a,int b,float c,float d,long e)
{
	long res2;
	res2=a*b*c*d*e;
	return res2;
}
int div(int a,int b,float c,float d,long e)
{
	long res3;
	res3=a/b/c/d/e;
	return res3;
}
int mod(int a,int b,float c,float d,long e)
{
	
	int h=(int)round(c);
	int i=(int)round(d);
	int j=(int)round(e);
	int res4;
    res4=a%b%h%i%j;
	return res4;
}
