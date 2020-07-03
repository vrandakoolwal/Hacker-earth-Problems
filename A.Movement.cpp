#include <iostream>
using namespace std;
int main()
{
	unsigned int n;
	cin>>n;
	unsigned int sum=0, ctr=0;
	while (sum!=n)
	{
		if (sum+5<=n)
		{
			sum+=5;
			ctr++;
		}
		else 
		{
			sum=n;
			ctr++;
		}
	}
	cout<<ctr;
}