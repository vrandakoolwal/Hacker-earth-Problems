#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long c, k, sum=0;
		cin>>c;
		long n;
		cin>>n;
		sum=(n*(n-1))/2;
		k=(c-sum)/n;
		sum+=n*k;
		if (k>0)
			cout<<c-sum<<endl;
		else 
			cout<<c<<endl;
	}
}