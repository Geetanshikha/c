#include<iostream>
using namespace std;
class student
{
    private:
	string name;
	int roll_num;
	float average;
	int m1,m2,m3,m4,m5,m6,m7;
	public:
	void set()
	{
	  cin>>name;
	  cin>>roll_num;
	  cin>>m1>>m2>>m3>>m4>>m5>>m6>>m7;
	}
	void averageres()
	{
      average=(m1+m2+m3+m4+m5+m6+m7)/7;
	}
	void display()
	{
       cout<<"name= "<<name<<endl;
       cout<<"roll_num= "<<roll_num<<endl;
       cout<<"average= "<<average<<endl;
	}
};
int main()
{
	student s1;
	s1.set();
	s1.averageres();
	s1.display();
}