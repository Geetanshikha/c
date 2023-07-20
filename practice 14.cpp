#include<stdio.h>
int main()
{
	char gr;
	printf("enter gr:");
	scanf("%c",&gr);
	if((gr>='A' && gr<='Z')||(gr>='a' && gr<='z'))
	{
		printf("it is an alphabet");
	}
	else 
	{
		printf("this is a digit");
	}
	return 0;
}
