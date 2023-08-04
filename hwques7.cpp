#include<iostream>
using namespace std;
class rectangle
{
    public:
	int l,w;
};
int main()
{
    int area;
	rectangle r1;
    cin>>r1.l>>r1.w;
    area=r1.l*r1.w;
    cout<<"area="<<area<<endl;
}