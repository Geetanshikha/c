#include<stdio.h>
int show(int a);
int beta(int b);
int main()
{
	int c=show(2);
	int d=show(5);
	printf("%d\n",c);
	printf("%d",d);
	return 0;
}
int show(int a)
{
	return a;
}
int beta(int b)
{
	return b;
}
