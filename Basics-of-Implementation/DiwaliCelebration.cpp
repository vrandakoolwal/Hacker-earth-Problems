#include <iostream>
using namespace std; 
int main()
{
	int t; 
	cin>> t;
	while (t--)
	{
		int a, n, k;
		cin>> a>> k>> n;
		int sum=0;
		sum= a+ k*(n-1);
		cout<<sum<<endl;
	}
}