#include<iostream>
using namespace std;
class rect
{
    private:
	int l,w;
	public:
	void set()
	{
	  cin>>l>>w;
	}
	void display()
	{
	  if(l==w)
	  {
          cout<<"it is a square"<<endl;
	  }
	  else
	  {
	     cout<<"it is not a square"<<endl;
	  }
	}
};
int main()
{
	rect r1;
	r1.set();
	r1.display();
}