#include<bits/stdc++.h>
using namespace std;
class Person{
	
	private:
	   string name;
	   int age;
	   string occupation;
	public:
	  void settermethod()
	  {
	    cin>>name;
	    cin>>age;
	    cin>>occupation;
	  }
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
    p1.settermethod();
    p1.displayinfo();
}