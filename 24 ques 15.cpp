#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%5==0 && i%11==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
