#include<iostream>
using namespace std;
class circle
{   
    private:
	int r,area;
	public:
	void set()
	{
	     cin>>r;
	}
	void areac()
	{
	     area=3.14*r*r;
	}
	void display()
	{
	   cout<<"area of a circle="<<area<<endl;
	}
};
int main()
{
	circle c1;
	c1.set();
	c1.areac();
	c1.display();
}