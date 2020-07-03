#include <iostream>
using namespace std;
 
int main()
{
	int N;
	cin>>N;
	int lines[N];
	
	for (int i=0; i<N; i++)
	{
		cin>> lines[i];
	}
	for (int i=0; i<N; i++)
	{
		for (int j=1; j<=lines[i]; j++)
		{
			for (int k=1; k<=lines[i]; k++)
			{
				if (k<=j)
					cout<<"*";
				else
					cout<<"#";
			}
			for (int k=1; k<=lines[i]; k++)
			{
				if (k>lines[i]-j)
					cout<<"*";
				else
					cout<<"#";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}