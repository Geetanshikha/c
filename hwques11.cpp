#include<iostream>
using namespace std;
class circle
{
    private:
	int r;
	float circum;
	public:
	void set()
	{
	  cin>>r;
	}
	void circ()
	{
	  circum=2*3.14*r;
	}
	void display()
	{
	  cout<<"circumference of a circle="<<circum<<endl;
	}
};
int main()
{
	circle c1,c2;
	c1.set();
	c1.circ();
	c1.display();
	c2.set();
	c2.circ();
	c2.display();
}