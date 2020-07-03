#include <iostream>
using namespace std;
int main()
{
	int n, x, y;
	cin>> n>> x>> y;
	int a[n];
	bool flag=false;
	for (int i=0; i<n; i++)
	{
		cin>> a[i];
	}
	for (int i=0; i<n; i++)
	{
		if (a[i]>y || a[i]<x)
		{
			flag=true;
			break;
		}
		else 
			flag=false;
	}
	if (flag==true)
	cout<< "NO \n";
	else 
	cout<< "YES \n";
}
