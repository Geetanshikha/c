#include<bits/stdc++.h>
using namespace std;
class fraction
{
	private:
	int a;
	int b;
	public:
	void setdetails()
	{
	 cin>>a;
	 cin>>b;
	}
	void getdetails()
	{
	 cout<<"add="<<a+b<<endl;
	 cout<<"sub="<<a-b<<endl;
	 cout<<"mul="<<a*b<<endl;
	 cout<<"div="<<a/b<<endl;
	 cout<<"mod="<<a%b<<endl;
	}
};
int main()
{
	fraction f1;
	f1.setdetails();
	f1.getdetails();
}