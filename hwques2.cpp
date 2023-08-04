#include<iostream>
using namespace std;
class person
{
	public:
	string name;
	int age;
	
};
int main()
{
	person p1;
	cin>>p1.name;
	cin>>p1.age;
	cout<<"name="<<p1.name<<endl;
	cout<<"age="<<p1.age<<endl;
}