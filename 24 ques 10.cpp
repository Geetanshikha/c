#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
	return 0;	
}
