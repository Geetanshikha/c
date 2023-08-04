#include<iostream>
using namespace std;
class employee
{
    public:
	string name;
	int id;
	int salary;
};
int main()
{
	employee e1;
	cin>>e1.name;
	cin>>e1.id;
	cin>>e1.salary;
    cout<<"name="<<e1.name<<endl;
    cout<<"id="<<e1.id<<endl;
    cout<<"salary="<<e1.salary<<endl;
}