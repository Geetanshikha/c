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
		for(int j=i+1;j<n;j++)
		{
			if(a[i]%2==0)
			{
				if(a[j]%2!=0)
				{
				int temp=0;
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			    }
			}
		}
		cout << a[i] << endl;
	}
	
	return 0;
}
