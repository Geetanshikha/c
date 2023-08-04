#include<iostream>
using namespace std;
class rect
{ 
    public:
	int l,w,a;
	public:
	void area()
	{
	   a=l*w;
	}
};
int main()
{
	rect r1;
    cin>>r1.l>>r1.w;
    r1.area();
    cout<<"area="<<r1.a<<endl;
}
