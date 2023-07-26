#include<stdio.h>
#include<math.h>
void add();
void sub();
void mul();
void div();
void mod();
int main()
{
	add();
	sub();
	mul();
	div();
	mod();
	return 0;
}
void add()
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
	printf("sum=%li\n",res);
}
void sub()
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
	printf("sub=%li\n",res1);
}
void mul()
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
	printf("mul=%li\n",res2);
}
void div()
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
	printf("div=%li\n",res3);
}
void mod()
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
	int j=(int)round(d);
	int k=(int)round(e);
	res4=a%b%h%j%k;
	printf("mod=%d\n",res4);
}

