#include<bits/stdc++.h>
using namespace std;
class book
{
    private:
	string title;
	string author;
	int year;
	public:
	book(string t,string a,int y)
	{
       title=t;
       author=a;
       year=y;
	}
	public:
	book()
	{
	  title="the great";
	  author="Jc bose";
	  year=2003;
	}
	public:
	void setdetails()
	{
      cin>>title;
      cin>>author;
      cin>>year;
	}
	void getdetails()
	{
	cout<<"title="<<title<<endl;
	cout<<"author="<<author<<endl;
	cout<<"year="<<year<<endl;
	}
};
int main()
{
	student s1("hf","abc",2001);
	student s2("gf","ghe",2000);
	student s3;
	s1.getdetails();
	s2.getdetails();
	s3.getdetails();
	s1.setdetails();
	s1.getdetails();
}