#include<iostream>
using namespace std;
class sq{
	private:
	int side;
	int ar;
	public:
		void set()
		{
			cin >> side;
		}
		void area()
		{
			ar=side * side;
		}
		void get()
		{
			cout <<" area of square:"<<ar << endl;
		}
		
};

int main()
{
	sq s1;
	s1.set();
	s1.area();
	s1.get();
	return 0;
}
