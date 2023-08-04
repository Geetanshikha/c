#include<iostream>
using namespace std;
class temperature
{
    private:
	int celsius;
	float farenhiet;
	public:
	void set()
	{
	  cin>>celsius;
	}
	void conver()
	{
	  farenhiet=9/5*celsius+32;
	}
	void display()
	{
      cout<<"farenhiet="<<farenhiet<<endl;
	}
};
int main()
{
	temperature t1;
	t1.set();
	t1.conver();
	t1.display();
}