#include<stdio.h>
int show(char a);
int main()
{
	char a;
	printf("enter a:");
	scanf("%c",&a);
	int b=show(a);
	if(b)
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is a consonant");
	}\
	return 0;
}
int show(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

