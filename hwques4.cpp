#include<iostream>
using namespace std;
class bankaccount
{   
    private:
	int acnum;
	string acname;
	int balance;
	public:
	void setdetails()
	{
        cin>>acnum;
        cin>>acname;
        cin>>balance;
	}
	void displaydetails()
	{
	   cout<<"account_num="<<acnum<<endl;
	   cout<<"account_name="<<acname<<endl;
	   cout<<"balance="<<balance<<endl;
	}
};
int main()
{
	bankaccount b1,b2;
	b1.setdetails();
	b1.displaydetails();
	b2.setdetails();
	b2.displaydetails();
}
