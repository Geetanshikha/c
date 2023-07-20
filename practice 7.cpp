#include<stdio.h>
int main()
{
	char vow;
	printf("enter the char:");
	scanf("%c",&vow);
	if(vow=='a' || vow=='e' || vow=='i'||vow=='o'||vow=='u'||vow=='A'||vow=='E'||vow=='I'||vow=='O'||vow=='U')
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is a consonant");
	}
	return 0;
}
