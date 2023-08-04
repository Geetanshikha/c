#include<iostream>
using namespace std;
class date
{
	private:
	int date;
	int month;
	int year;
	public:
	void set()
	{
	  cin>>date;
	  cin>>month;
	  cin>>year;
	}
	void display()
	{
	  cout<<date<<":"<<month<<":"<<year<<endl;
	}
};
int main()
{
	date d1;
	d1.set();
	d1.display();
}