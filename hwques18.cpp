#include<iostream>
using namespace std;
class complex
{
    private:
	int n1,n2,n3,n4;
	float n5;
	float add;
	public:
	void set1()
	{
	  cin>>n1>>n2>>n3>>n4>>n5;
	}
	void display()
	{
	 cout<<"rest="<<rest<<endl;
	}
};
int main()
{
	 complex c1,c2,res;
	 res=c1.set1()+c2.set1();
	 res.display();
}
