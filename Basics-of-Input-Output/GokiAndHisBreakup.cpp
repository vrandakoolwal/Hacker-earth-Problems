#include <iostream>
using namespace std;
int main()
{
	long N;
	cin>>N;
	long X,Y[N];
	cin>>X;
	for (int i=0; i<N; i++)
	{
		cin>>Y[i];
	}
	for (int i=0; i<N; i++)
	{
		if (Y[i]<X)
		cout<<"NO \n";
		else 
		cout<<"YES \n";
	}
}