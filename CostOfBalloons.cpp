#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int green, purple;
		cin>>green>>purple;
		int n;
		cin>>n;
		int participants[n][2], first=0, second=0;
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<2; j++)
			{
				cin>>participants[i][j];
			}
		}
		for (int i=0; i<10; i++)
		{
			if (participants[i][0]==1)
			{
				first++;
			}
			if (participants[i][1]==1)
			{
				second++;
			}
		}
		if (green*first+ purple*second >= green*second+purple*first)
		cout<<green*second+purple*first<<endl;
		else 
		cout<<green*first+ purple*second<<endl;
	}
}