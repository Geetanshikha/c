#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5;
	float perc,k;
	printf("enter the marks :");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	k=(m1+m2+m3+m4+m5)/500;
	perc=k*100;
	printf("percentage=%f\n",perc);
	if(perc<25)
	{
		printf("F + perc=%f\n",perc);
	}
	else if(perc>=25 && perc<=45)
	{
		printf("E + perc=%f\n",perc);
	}
	else if(perc>=45 && perc<=50)
	{
		printf("D + perc=%f\n",perc);
	}
	else if(perc>=50 && perc<=60)
	{
		printf("C + perc=%f\n",perc);
	}
	else if(perc>=60 && perc<=80)
	{
		printf("B + perc=%f\n",perc);
	}
	else if(perc>80)
	{
		printf("A + perc=%f\n",perc);
	}
	else
	{
		printf("no remarks");
	}
	return 0;
}
