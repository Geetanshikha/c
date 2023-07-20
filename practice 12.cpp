#include<stdio.h>
int main()
{
	char temp;
	float cel,far,c,f;
	printf("enter temp:");
	scanf("%c",&temp);
	if(temp=='c')
	{
		printf("enter the farenhiet:");
		scanf("%f",&far);
		c=(far-32)*0.5;
        printf("celsius=%f",c);		
	}
	else
	{
		printf("enter the celsius:");
		scanf("%f",&cel);
		f=(1.8*cel)-32;
		printf("farenhiet=%f",f);
	}
	return 0;
}
