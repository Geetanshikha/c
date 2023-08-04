#include<iostream>
using namespace std;
class circle
{
	public:
	int r;
};
int main()
{
    float circum;
	circle c1;
	cin>>c1.r;
	circum=2*3.14*c1.r;
	cout<<"circumference of a circle="<<circum<<endl;
}
