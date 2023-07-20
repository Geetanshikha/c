#include<stdio.h>
int main()
{
	char m;
	printf("enter the character :");
	scanf("%c",&m);
	if(m>='A' && m<='Z')
	{
		printf(" uppercase");
	}
	else if(m>='a' && m<='z')
	{
		printf(" lowercase");
	}
	else 
	{
		printf("neither uppercase and lowercase");
	}
	return 0;
}
