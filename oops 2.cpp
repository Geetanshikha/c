#include<iostream>
using namespace std;
class info{
	private:
   string name;
   int num;
   char grade;
	
	public:
		void set()
		{
			cin >> name;
			cin >> num;
			cin >> grade;
		}
		void get()
		{
			cout << "name=" <<name <<endl;
			cout << "num=" << num << endl;
			cout << "grade=" <<grade << endl;
		}
};
int main()
{
	info s1;
	s1.set();
	s1.get();
	return 0;
}
