#include<iostream>
using namespace std;
class circle
{
    public:
    int r;
    float circum;
    public:
    void circumference()
    {
       circum=2*3.14*r;
    }
};
int main()
{
	circle c1;
	cin>>c1.r;
	c1.circumference();
	cout<<"circumference of a circle="<<c1.circum<<endl;
}