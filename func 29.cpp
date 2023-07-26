#include<stdio.h>
int show();
int main()
{

	int b=show();
	if(b)
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is a consonant");
	}
	return 0;
}
int show()
{
	char a;
	printf("enter a:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
