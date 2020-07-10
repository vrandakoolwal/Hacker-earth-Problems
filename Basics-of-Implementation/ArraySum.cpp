#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	unsigned long a[t];
	for (int i=0; i<t; i++)
	{
		cin>>a[i];
	}
	unsigned long sum=0;
	for (int i=0; i<t; i++)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;

}