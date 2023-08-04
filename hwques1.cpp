#include<iostream>
using namespace std;
class person
{
    private:
	string name;
	int age;
	public:
	void setdetails()
	{
	   cin>>name;
	   cin>>age;
	}
	void displaydetails()
	{
	   cout<<"name="<<name<<endl;
	   cout<<"age="<<age<<endl;
	}
};
int main()
{
	person p1;
	p1.setdetails();
	p1.displaydetails();
}