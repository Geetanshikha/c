#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
   int num1=10;
   int num2=20;
   int c=add(num1, num2);
   cout<<c;
	
}
int add(int a,int b)
{
	return a+b;
}