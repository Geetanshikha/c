#include<iostream>
using namespace std;
class car
{
    private:
	string make;
	string model;
	int year;
	public:
	void setdetails()
	{
	   cin>>make;
	   cin>>model;
	   cin>>year;
	}
	void display()
	{
	   cout<<"make by="<<make<<endl;
	   cout<<"model="<<model<<endl;
	   cout<<"year="<<year<<endl;
	}
};
int main()
{
	car c1,c2;
	c1.setdetails();
	c1.display();
	c2.setdetails();
	c2.display();
}