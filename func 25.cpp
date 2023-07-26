#include<stdio.h>
#include<math.h>
void add(int a,int b,float c,float d,long e);
void sub(int a,int b,float c,float d,long e);
void mul(int a,int b,float c,float d,long e);
void div(int a,int b,float c,float d,long e);
void mod(int a,int b,float c,float d,long e);
int main()
{
	int a,b;
	float c,d;
	long e;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter c,d:");
	scanf("%f %f",&c,&d);
	printf("enter e:");
	scanf("%li",&e);
	 add(a,b,c,d,e);
	 sub(a,b,c,d,e);
	 mul(a,b,c,d,e);
     div(a,b,c,d,e);
	 mod(a,b,c,d,e);
	return 0;
}
void add(int a,int b,float c,float d,long e)
{
	long res;
	res=a+b+c+d+e;
	printf("res=%li\n",res);
}
void sub(int a,int b,float c,float d,long e)
{
	
	long res1;
	res1=a-b-c-d-e;
	printf("res1=%li\n",res1);
}
void mul(int a,int b,float c,float d,long e)
{
	
	long res2;
	res2=a*b*c*d*e;
	printf("res2=%li\n",res2);
}
void div(int a,int b,float c,float d,long e)
{
	
	long res3;
	res3=a/b/c/d/e;
	printf("res3=%li\n",res3);
}
void mod(int a,int b,float c,float d,long e)
{
	
	long res4;
	int h=(int)round(c);
	int j=(int)round(d);
	int k=(int)round(e);
	res4=a%b%h%j%k;
	printf("res4=%li\n",res4);
}
