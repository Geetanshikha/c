#include<iostream>
using namespace std;
class bankacc
{
    private:
	int acnum;
	int balance;
	public:
	void set()
	{
	  cin>>acnum;
	  cin>>balance;
	}
	void display()
	{
	  cout<<"acc_num="<<acnum<<endl;
	  cout<<"balance="<<balance<<endl;
	}
};
int main()
{
	bankacc b1;
	b1.set();
	b1.display();
}