#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		
		long alice[n], bob[n];
		
		for (int i=0; i<n; i++)
			cin>>bob[i];
		for (int i=0; i<n; i++)
			cin>>alice[i];
		long maxBob=bob[0], maxAlice=alice[0];
		for (int i=0; i<n; i++)
		{
			if (bob[i]>maxBob)
				maxBob=bob[i];
			
			if (alice[i]>maxAlice)
				maxAlice=alice[i];
		}
		if (maxAlice>maxBob)
			cout<<"Alice \n";
		else if (maxAlice<maxBob)
			cout<<"Bob \n";
		else
			cout<<"Tie \n";
		
	}
}
