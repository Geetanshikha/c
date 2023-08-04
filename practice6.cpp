#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    private:
	int len;
	int wid;
    public:
    rectangle(int l,int w)
    {
    	len=l;
    	wid=w;
    }
	public:
	void setdetails()
	{
	 cin>>len;
	 cin>>wid;
	}
	void getdetails()
	{
	cout<<"length="<<len<<endl;
	cout<<"width="<<wid<<endl;
	cout<<"area="<<len*wid<<endl;
	cout<<"perimeter="<<2*(len+wid)<<endl;
	}
};
int main()
{
	rectangle r1(3,4);
	r1.getdetails();
	r1.setdetails();
	r1.getdetails();
}