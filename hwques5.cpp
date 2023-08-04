#include<iostream>
using namespace std;
class bankacc
{
    public:
	int acnum;
	string acname;
	int balance;
};
int main()
{
	bankacc b1,b2;
	cin>>b1.acnum>>b1.acname>>b1.balance;
	cin>>b2.acnum>>b2.acname>>b2.balance;
	cout<<"account_num= "<<b1.acnum<<endl;
	cout<<"account_name= "<<b1.acname<<endl;
	cout<<"balance= "<<b1.balance<<endl;
	cout<<"account_num= "<<b2.acnum<<endl;
	cout<<"account_name= "<<b2.acname<<endl;
	cout<<"balance= "<<b2.balance<<endl;
}