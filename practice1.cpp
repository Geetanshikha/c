#include<bits/stdc++.h>
using namespace std;
class person
{
    private:
    int age;
    string name;
    int salary;
    string occupation;
    public:
    void setdetails()
    {
       cin>>age;
       cin>>name;
       cin>>salary;
       cin>>occupation;
    }
    void getdetails()
    {
      cout<<"age="<<age<<endl;
      cout<<"name="<<name<<endl;
      cout<<"salary="<<salary<<endl;
      cout<<"occupation="<<occupation<<endl;
    }
};
int main()
{
	person p1;
	p1.setdetails();
	p1.getdetails();
	return 0;
}
