#include<stdio.h>
int main()
{
	int a=0,b;
	while(a<=10)
	{
		int i=0;
		while(i<=10)
		{
			b=a*i;
			printf(" %d * %d = %d\n",a,i,b);
			i++;
		}
		printf(" \n ");
	    a++;
	}
	return 0;
}
