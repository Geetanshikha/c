#include<iostream>
using namespace std;
class time
{
    private:
	int hours;
	int minutes;
	public:
	time(int h,int m)
	{
	  hours=h;
	  minutes=m;
	}
	time()
	{
	  hours=5;
	  minutes=3;
	}
	void setdata()
	{
	  cin>>hours>>minutes;
	}
	void getdata()
	{
	  cout<<hours<<minutes<<endl;
	}
};
int main()
{
	time t1(4, 6);
	time t2(5,8);
	time t3;
	t1.getdata();
	t2.getdata();
	t3.getdata();
	t1.setdata();
	t1.getdata();
}