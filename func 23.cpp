#include<stdio.h>
#include<math.h>
int add();
int sub();
int mul();
int div();
int mod();
int main()
{
	int l=add();
	printf("sum=%d\n",l);
	int m=sub();
	printf("sub=%d\n",m);
	int n=mul();
	printf("mul=%d\n",n);
	int o=div();
	printf("div=%d\n",o);
	int p=mod();
	printf("mod=%d\n",p);
	return 0;
}
int add()
{
	int a,b;
	float c,d;
	long e,res;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	res=a+b+c+d+e;
	return res;
}
int sub()
{
	int a,b;
	float c,d;
	long e,res1;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	res1=a-b-c-d-e;
	return res1;
}
int mul()
{
	int a,b;
	float c,d;
	long e,res2;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	res2=a*b*c*d*e;
	return res2;
}
int div()
{
	int a,b;
	float c,d;
	long e,res3;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	res3=a/b/c/d/e;
	return res3;
}
int mod()
{
	int a,b;
	float c,d;
	long e,res4;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	int h=(int)round(c);
	int f=(int)round(d);
	int k=(int)round(e);
	res4=a%b%h%f%k;
	return res4;
}
