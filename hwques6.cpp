#include<iostream>
using namespace std;
class rectangle
{
    private:
	int length;
	int width;
	int area;
	public:
	void setdetails()
	{
	   cin>>length;
	   cin>>width;
	}
	void arear()
	{
	   area=length*width;
	}
	void display()
	{
	   cout<<"area of rect="<<area<<endl;
	}
};
int main()
{
	rectangle r1;
	r1.setdetails();
	r1.arear();
	r1.display();
}