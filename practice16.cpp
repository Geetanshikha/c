#include<iostream>
using namespace std;
class fraction
{
    private:
	int a;
	int b;
	int add;
	int sub;
	int mul;
	int div;
	int mod;
	public:
	void setdata()
	{
	  cin>>a>>b;
	}
	void one()
	{
	   add=a+b;
	}
	void second()
	{
	   sub=a-b;
	}
	void third()
	{
	   mul=a*b;
	}
	void four()
	{
       div=a/b;
	}
	void five()
	{
	   mod=a%b;
	}
	void display()
	{
	  cout<<"add="<<add<<endl;
	  cout<<"sub="<<sub<<endl;
	  cout<<"mul="<<mul<<endl;
	  cout<<"div="<<div<<endl;
	  cout<<"mod="<<mod<<endl;
	}
};
int main()
{
	fraction f1;
	f1.setdata();
	f1.one();
	f1.second();
	f1.third();
	f1.four();
	f1.five();
	f1.display();
}