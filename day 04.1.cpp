#include<bits/stdc++.h>
using namespace std;
class Person{
	
	public:
	   string name;
	   int age;
	   string occupation;
	public:
	  void displayinfo()
	  {
	    cout<<"Name:"<<name<<"\n";
	    cout<<"Age:"<<age<<endl;
	    cout<<"occupation: "<<occupation<<endl;
	  }
};
int main()
{
	Person p1;
    //cout<<"Person age is:"<<p1.age<<endl;
    p1.name="geet";
    p1.occupation="xyz";
    p1.age=145;
    p1.displayinfo();
}