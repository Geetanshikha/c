#include<bits/stdc++.h>
using namespace std;
class person
{
	private:
	int age;
	int sal;
	string name;
	public:
	person()
	{
	 age=0;
	 sal=0;
	 name="ud";
	}
	public:
	void displayinfo()
	{
	 cout<<"age="<<age<<endl;
	 cout<<"sal="<<sal<<endl;
	 cout<<"name="<<name<<endl;
	}
};
int main()
{
	person p1;
	p1.displayinfo();
}