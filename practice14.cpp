#include<iostream>
using namespace std;
class rectangle
{
    private:
		int len;
		int wid;
		int area;
	public:
		rectangle()
		{
		  len=4;
		  wid=5;
		}
		void setdata()
		{
			cin>>len>>wid;
		}
		void areafun()
		{
		   area=len*wid;
		}
		void display()
		{
		  cout<<"area="<<area<<endl;
		}
};
int main()
{
	rectangle r1;
	r1.areafun();
	r1.display();
	r1.setdata();
	r1.areafun();
	r1.display();
	return 0;
}