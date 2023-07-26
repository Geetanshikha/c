#include<stdio.h>
void show(char c);
int main()
{
	char c;
	show(c);
	return 0;
	
}
void show(char c)
{
	printf("enter c:");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("it is a vowel");
	}
	else 
	{
		printf("it is a consonant");
	}
}
