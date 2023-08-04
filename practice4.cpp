#include<bits/stdc++.h>
using namespace std;
class person {
    private:
	int age;
	int salary;
	string name;
	string occupation;

	public://by parameterized constructor
	 person(int a,int s,string n,string o)
	 {
	    age=a;
	    salary=s;
	    name=n;
	    occupation=o;
	 }

	 public:
	 void setdetails()
	 {
	   cin>>age;
	   cin>>salary;
	   cin>>name;
	   cin>>occupation;
	 }
	 void getdetails()
	 {
	  cout<<"age="<<age<<endl;
	  cout<<"salary="<<salary<<endl;
	  cout<<"name="<<name<<endl;
	  cout<<"occupation="<<occupation<<endl;
	  }
};
int main()
{
	person p1(12,790,"geet","eng");
	person p2(13,800,"xyz","cse");
	p1.getdetails();
	p2.getdetails();
	p1.setdetails();
	p2.setdetails();
	p1.getdetails();
	p2.getdetails();
}
