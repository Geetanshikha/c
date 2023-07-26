#include<stdio.h>
void show();
int main()
{
	show();
	return 0;
}
void show()
{
	char a;
	printf("enter a:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is a consonant");
	}
}

