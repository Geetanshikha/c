#include<iostream>
using namespace std;
class employee
{
    private:
	string name;
	int employeeid;
	int salary;
	public:
	void set()
	{
	  cin>>name;
	  cin>>employeeid;
	  cin>>salary;
	}
	void display()
	{
	   cout<<"employee name="<<name<<endl;
	   cout<<"employee id="<<employeeid<<endl;
	   cout<<"salary="<<salary<<endl;
	}
};
int main()
{
	employee e1;
	e1.set();
	e1.display();
}