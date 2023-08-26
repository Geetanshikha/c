#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	   cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			if(a[i+1]%2!=0)
			{
				int temp=0;
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;				
			}
		}
		cout << a[i] << endl;
	}
	return 0;
}
