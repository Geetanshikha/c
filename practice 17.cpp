#include<stdio.h>
int main()
{
	char D;
	int centim,metre;
	printf("D:");
	scanf("%c",&D);
	if(D=='m')
	{
		int height;
		printf("height in metres:");
		scanf("%d",&height);
		centim=height*100;
		printf("centimeter=%d\n",centim);
		if(centim>50 && centim<80)
		{
			printf("low");
		}
		else if(centim>80 && centim<120)
		{
			printf("medium");
		}
		else if(centim>120 && centim<150)
		{
			printf("large");
		}
		else if(centim>150 && centim<180)
		{
			printf("very large");
		}
		else
		{
			printf("nothing");
		}
	}
	else if(D=='c')
	{
		int height;
		printf("enter height in cm:");
		scanf("%d",&height);
		if(height>50 && height<80)
		{
			printf("low");
		}
		else if(height>80 && height<120)
		{
			printf("medium");
		}
		else if(height>120 && height<=150)
		{
			printf("large");
		}
		else if(height>150 && height<180)
		{
			printf("very large");
		}
		else
		{
			printf("nothing");
		}
		
	}
	return 0;
}
