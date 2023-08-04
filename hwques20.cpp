#include<iostream>
using namespace std;
class time
{
    private:
	int hour,min;
	public:
	void set()
	{
	  cin>>hour;
	  cin>>min;
	}
	void display()
	{
	  cout<<hour<<":"<<min<<endl;
	}
};
int main()
{
	time t1;
	t1.set();
	t1.display();
}