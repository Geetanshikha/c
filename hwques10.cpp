#include<iostream>
using namespace std;
class car
{
    public:
	string make;
	string name;
	int year;
};
int main()
{
	car c1,c2,c3;
	cin>>c1.make>>c1.name>>c1.year;
	cout<<c1.make<<" "<<c1.name<<" "<<c1.year<<" "<<endl;
	cin>>c2.make>>c2.name>>c2.year;
	cout<<c2.make<<" "<<c2.name<<" "<<c2.year<<" "<<endl;
	cin>>c3.make>>c3.name>>c3.year;
	cout<<c3.make<<" "<<c3.name<<" "<<c3.year<<" "<<endl;
}