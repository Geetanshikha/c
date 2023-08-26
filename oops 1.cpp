#include<iostream>
using namespace std;

	class geet{
		public:
		string name;
		int age;
		int roll_num;
		
	};
	
int main()
{
		geet g1;
		cin >> g1.name;
		cin >> g1.age ;
		cin >> g1.roll_num ;
		cout << "name=" << g1.name << endl;
		cout <<"age=" <<g1.age << endl;
		cout << "roll_num=" << g1.roll_num <<endl; 
}
