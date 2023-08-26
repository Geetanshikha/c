#include<iostream>
using namespace std;
class car{
	private:
	string car_name;
	int car_num;
	int price;
	public:
		void set()
		{
			cin >> car_name;
			cin >> car_num;
			cin >> price;
		}
		void get()
		{
			cout << "name="<<car_name << endl;
			cout << "num="<<car_num << endl;
			cout << "price="<<price<< endl;
		}
};
int main()
{
	car c1,c2,c3;
	c1.set();
	c1.get();
	c2.set();
	c2.get();
	c3.set();
	c3.get();
	return 0;
}
