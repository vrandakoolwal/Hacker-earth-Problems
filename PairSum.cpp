#include <iostream>
using namespace std;
int main()
{
	unsigned int N, K;
	cin>> N>>K;
	unsigned int A[N];
	for (unsigned int i=0 ;i<N; i++)
	{
		cin>>A[i];
	}
	bool flag=false;
	for (unsigned int i=0; i<N; i++)
	{
		for (unsigned int j=i+1; j<N; j++)
		{
			if (A[i]+A[j]==K)
			{
				flag=true; 
				break;
			}
			else
				flag=false;
		}
	}
	if (flag==true)
		cout<<"YES \n";
	else
		cout<<"NO \n";

}
