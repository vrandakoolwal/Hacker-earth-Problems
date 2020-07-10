#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n, count=0;
		cin>>n;
		int array[n];
		for (int i=0; i<n; i++)
		{
			cin>>array[i];
		}
		for (int i=0; i<n; i++)
		{
			for (int j=i+1; j<n; j++)
			{
				if ((array[i]+array[j])%2==0 && (array[i]!=array[j]))
				count++;
			}
		}
		cout<<count<<endl;
	}
}