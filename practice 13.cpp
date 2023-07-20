#include<stdio.h>
int main()
{
	char math;
	float area,vol,l,b,h,s;
	printf("enter math:");
	scanf("%c",&math);
	if(math=='a')
	{
		 char sh;
         printf("enter sh:");
		 scanf(" %c",&sh);
		 if(sh=='s')
		 {
		 	printf("enter side:");
		 	scanf("%f",&s);
		 	area=s*s;
		 	printf("area of a square=%f",area);
		  }
		  else if(sh=='t')
		  {
		  	printf("enter b,h:");
		  	scanf("%f %f",&b,&h);
		  	area=0.5*b*h;
		  	printf("area of triangle=%f",area);
		  }
		  else if(sh=='r')
		  {
		  	printf("enter l,b:");
		  	scanf("%f %f",&l,&b);
		  	area=l*b;
		  	printf("area of rectangle=%f",area);
		  }
		  else
		  {
		  	printf("no area");
		  }
		  		
	}
	else if(math=='v')
	{
		char sh;
        printf("enter sh:");
		scanf("%c",&sh);
		if(sh=='s')
		{
			printf("enter s:");
			scanf("%f",&s);
			vol=s*s*s;
			printf("volume of square=%f",vol);
		}
		else if(sh=='t')
		{
			printf("enter b,h:");
			scanf("%f %f",&b,&h);
			vol=b*h;
			printf("volume of triangle=%f",vol);
			
		}
		else if(sh=='r')
		{
			printf("enter l,b,h:");
			scanf("%f %f %f",&l,&b,&h);
			vol=l*b*h;
			printf("volume of rectangle=%f",vol);
		}
		else
		{
			printf("no area");
		}
	}
	else
	{
		printf("please input a and v only");
	}
	return 0;
}
