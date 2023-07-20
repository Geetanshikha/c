#include<stdio.h>
int main()
{
	char A;
	float payment,op;
	char cn,rn;
	int number,pieces;
	printf("retailer or customer:");
	scanf("%c",&A);
	if(A=='c')
	{
		printf("customer name:\n");
		scanf(" %c",&cn);
		printf("customer contact number:\n");
		scanf("   %d",&number);
		printf("payment:\n");
		scanf("%f",&op);
		if(op>100 && op<1000)
		{
			printf("discount of 5%\n");
			payment=op-0.05*op;
			printf("total payment=%f",payment);
		}
		else if(op>1000 && op<2000)
		{
			printf("discount of 10%\n");
			payment=op-0.1*op;
			printf("total payment=%f",payment);
		}
		else if(op>2000 && op<=3000)
		{
			printf("discount of 15%\n");
			payment=op-0.15*op;
			printf("total payment=%f",payment);
		}
		else if(op>3000)
		{
			printf("discount of 30%\n");
			payment=op-0.3*op;
			printf("total payment=%f",payment);
		}
		else
		{
			printf(" no discount");
		}
		
	}
	else if(A=='r')
	{
		printf("retailer name:");
		scanf(" %c",&rn);
		printf("pieces:\n");
		scanf("  %d",&pieces);
		printf("payment:");
		scanf("%f",&payment);
		if(pieces>1 && pieces<=15)
		{
			printf("discount of 15%\n");
			payment=payment-0.15*payment;
			printf("total payment=%f",payment);
		}
		else if(pieces>15 && pieces<30)
		{
			printf("discount of 30%\n");
			payment=payment-0.3*payment;
			printf("total payment=%f",payment);
		}
		else if(pieces>30 && pieces<50)
		{
			printf("discount of 50%\n");
			payment=payment-0.5*payment;
			printf("total payment=%f",payment);
		}
		else
		{
			printf("no discount");
		}
	}
	return 0;
}
