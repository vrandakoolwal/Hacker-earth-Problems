#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int round=0;
	while(T--)
	{
		long r, x;
		cin>> r>>x;
		double circumference= 2*r*22.0/7;
		long metres=100*x;	
		if (circumference<=metres)
		{
			round++;
		}
	}
	cout<<round<<endl;

}