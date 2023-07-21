#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,number,i=2;
	printf("enter any number:");
	scanf("%d",&number);
	printf("%d %d",n1,n2);
	while(i<number)
	{
		n3=n2+n1;
		printf(" %d ",n3);
		n1=n2;
		n2=n3;
		i++;
	}
	return 0;
}
