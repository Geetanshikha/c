#include<iostream>
using namespace std;
class calc{
	int a;
	int b;
	int add;
	int sub;
	int mul;
	int div;
	int mod;
	public:
		void set()
		{
			cin >> a;
			cin >> b;
		}
		void oper()
		{
			add=a+b;
			sub=a-b;
			mul=a*b;
			div=a/b;
			mod=a%b;
		}
		void display()
		{
			cout << "add=" << add <<endl;
			cout << "sub=" << sub << endl;
			cout << "mul=" <<mul << endl;
			cout <<"div=" << div << endl;
			cout << "mod=" <<mod << endl;
			
		}
};
int main()
{
	calc c1;
	c1.set();
	c1.oper();
	c1.display();
}

