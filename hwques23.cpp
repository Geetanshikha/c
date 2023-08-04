#include<iostream>
using namespace std;
class country
{
	private:
	string cname;
	public:
	void set()
	{
	  cin>>cname;
	}
	void display()
	{
	 cout<<cname<<endl;
	}
};
int main()
{
	country c1,c2,c3,c4,c5;
	c1.set();
	c1.display();
	c2.set();
	c2.display();
	c3.set();
	c3.display();
	c4.set();
	c4.display();
	c5.set();
	c5.display();
}