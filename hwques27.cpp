#include<iostream>
using namespace std;
class book
{
    private:
	string title;
	string author;
	int ISBN;
	public:
	void set()
	{
	   cin>>title;
	   cin>>author;
	   cin>>ISBN;
	}
	void display()
	{
	   cout<<"title="<<title<<endl;
	   cout<<"author="<<author<<endl;
	   cout<<"ISBN="<<ISBN<<endl;
	}
};
int main()
{
	book b1;
	b1.set();
	b1.display();
}