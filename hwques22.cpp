#include<iostream>
using namespace std;
class student
{
    private:
	string name;
	int rollnum;
	public:
	void set()
	{
	   cin>>name;
	   cin>>rollnum;
	}
	void display()
	{
	  cout<<"name="<<name<<endl;
	  cout<<"roll number="<<rollnum<<endl;
	}
};
int main()
{
	student s1;
	s1.set();
	s1.display();
}