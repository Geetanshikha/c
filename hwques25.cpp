#include<iostream>
using namespace std;
class bank
{
    private:
	string bname;
	public:
	void set()
	{
	  cin>>bname;
	}
	void display()
	{
	  cout<<bname<<endl;
	}
};
int main()
{
	bank b1,b2,b3;
	b1.set();
	b1.display();
	b2.set();
	b2.display();
	b3.set();
	b3.display();
}