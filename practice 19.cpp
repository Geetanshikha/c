#include<stdio.h>
int main()
{
	int holiday;
	float salary;
	printf("enter salary:");
	scanf("%f",&salary);
	printf("enter holiday:");
	scanf("%d",&holiday);
	if(holiday==1)
	{
		printf("full slary=%f",salary);
	}
	else if(holiday>=2 && holiday<=5)
	{
		salary=salary-0.05*salary;
		printf("salary=%f\n",salary);
		printf("alot holidays=%d",holiday);
	}
	else if(holiday>5 && holiday<=14)
	{
		salary=salary-0.1*salary;
		printf("salary=%f\n",salary);
		printf("alot holidays=%d",holiday);
	}
	else if(holiday>15)
	{
		salary=salary-0.5*salary;
		printf("salary=%f\n",salary);
		printf("alot holidays=%d",holiday);
	 } 
	 else
	 {
	 	printf("not salary");
	 	printf("alot holidays=%d",holiday);
	 }
	 return 0;
}
