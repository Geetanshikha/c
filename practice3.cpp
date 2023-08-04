#include<bits/stdc++.h>
using namespace std;
class person
{
	public:
	int age;
	int num;
	string name;
	public:
	void displayinfo()
	{
	cout<<"age="<<age<<endl;
	cout<<"num="<<num<<endl;
	cout<<"name="<<name<<endl;
	}
};
int main()
{
	person p1;
	p1.age=13;
	p1.num=90;
	p1.name="geet";
	p1.displayinfo();
}