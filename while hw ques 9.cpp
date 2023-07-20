#include<stdio.h>
int main()
{
	int num;
	int a=2,b;
	int i=0;
	while(i<=10)
	{
		b=a*i;
		printf(" %d * %d = %d\n",a,i,b);
		i++;
	}
	return 0;
}
