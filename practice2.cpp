#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
	int age;
	int salary;
	string name;
};
int main()
{
	person p1;
	p1.age=15;
	p1.name="geet";
	p1.salary=6000;
	cout<<"age="<<p1.age<<endl;
	cout<<"salary="<<p1.salary<<endl;
	cout<<"name="<<p1.name<<endl;
	return 0;
}

