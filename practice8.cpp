#include<bits/stdc++.h>
using namespace std;
class car
{
	private:
	string model;
	int year;
	int price;
	public:
	car()
	{
	 model="toyota";
	 year=1996;
	 price=9000000;
	}
	public:
	car(string m,int y,int p)
	{
	  model=m;
	  year=y;
	  price=p;
	}
	public:
	void setdetails()
	{
	cin>>model;
	cin>>year;
	cin>>price;
	}
	void getdetails()
	{
	 cout<<"model="<<model<<endl;
	 cout<<"year="<<year<<endl;
	 cout<<"price="<<price<<endl;
	}
};
int main()
{   
	car c3;
	c3.getdetails();
	car c1("swift",2001,50000);
	car c2("maruti",2000,800000);
	c1.getdetails();
	c2.getdetails();
	c1.setdetails();
	c1.getdetails();
}