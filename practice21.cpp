#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int*x;
	x=&a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<*x<<endl;
	cout<<*(&a)<<endl;
	cout<<&x;

}