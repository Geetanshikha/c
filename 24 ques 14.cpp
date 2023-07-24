#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter a,b:");
	scanf("%d",&a,&b);
	for(i=a;a>=b;a--)
	{
		if(a%2!=0)
	   {
		printf("%d\n",a);
	   }
	}
	return 0;
}
