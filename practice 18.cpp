#include<stdio.h>
int main()
{
	float roll_no,total,perc;
	int div;
	int m1,m2,m3;
	printf("Test Data:\n");
	printf("Input Roll Number:\n");
	scanf("%d",&roll_no);
	printf("Input the marks of physics,chemistry and computer application:");
	scanf("%d %d %d",&m1,&m2,&m3);
	total=m1+m2+m3;
	perc=(total/300)*100;
	printf("percentage=%f\n",perc);
	if(perc>80 && perc<100)
	{
		printf("first division");
	}
	else if(perc>60 && perc<80)
	{
		printf("second division");
	}
	else if(perc<60)
	{
		printf("third division");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
