#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
   printf("swap value of a=%d\n",a);
   printf("swap value of b=%d",b);
   return 0;
}
