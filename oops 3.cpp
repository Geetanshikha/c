#include<iostream>
using namespace std;
class rect{
	private:
	int length;
	int breadth;
	
	public:
		void set()
		{
			cin >> length;
			cin >> breadth;
		}
		void area()
		{
			int ar;
			ar=length * breadth;
		}
		void get()
		{
			int ar;
			cout << "area of rectangle=" << ar <<endl;
		}
};
int main()
{
	rect r1;
	r1.set();
	r1.area();
	r1.get();
	return 0;
}
