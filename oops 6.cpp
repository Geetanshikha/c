#include<iostream>
using namespace std;
class rec{
	private:
	int length;
	int breadth;
	int ar,per;
	public:
		void set()
		{
			cin >> length;
			cin >> breadth;
		}
		void calc()
		{
			ar=length * breadth;
			per=2*(length+breadth);
		}
		void get()
		{
			cout << "area of rect="<<ar<<endl;
			cout <<"peri of rect="<<per<<endl;
		}
};
int main()
{
	rec r1;
	r1.set();
	r1.calc();
	r1.get();
	return 0;
}
