#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5;
	float average;
	printf("enter the marks:");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	if(m1>40 && m2>40 && m3>40 && m4>40 && m5>40)
	{
		average=(m1+m2+m3+m4+m5)/5;
		printf("average=%f\n",average);
		if(average>45 && average<50)
		{
			printf("D + average=%f\n",average);
		}
		else if(average>50 && average<60)
		{
			printf("C + average=%f\n",average);
		}
		else if(average>60 && average<80)
		{
			printf("B + average=%f\n",average);
		}
		else if (average>80)
		{
			printf("A + average=%f\n",average);
		}
   	}
 else
    {
 	printf("please enter the number greater than 40:");
	}
	return 0; 	
}
