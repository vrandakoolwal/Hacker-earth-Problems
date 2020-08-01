#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a=0, b=7;
	int t;
	cin >> t;
	int n;
	for (int i=1; i<=t; i++)
	{
		cin>>n;
		if (abs(a-n)<abs(b-n))
		{
			cout<<"A \n";
			a=n;
		}
		else if (abs(a-n)>abs(b-n))
		{
			cout<<"B \n";
			b=n;
		}
		else if (abs(a-n)== abs(b-n))
		{
			if (a<b)
			{
				cout<<"A \n";
				a=n;
			}
			else 
			{
				cout<<"B \n";
				b=n;
			}
		}
	}
}