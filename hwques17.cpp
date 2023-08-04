#include<iostream>
using namespace std;
class time
{
    private:
	int h1,h2;
	int m1,m2;
	int add1,add2;
	public:
	void set()
	{
	  cin>>h1>>m1;
	}
	void set1()
	{
	  cin>>h2>>m2;
	}
	void add()
	{
	   add1=h1+h2;
	   add2=m1+m2;
	}
	void display()
	{
	   cout<<"total hours="<<add1<<endl;
	   cout<<"total minutes="<<add2<<endl;
	   cout<<"total time="<<add1<<"hours"<<add2<<"minutes"<<endl;
	}
};
int main()
{
	time res;
	res.set();
	res.set1();
	res.add();
	res.display();

}