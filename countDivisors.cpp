#include <iostream>
using namespace std;
int main()
{
	int l,r,k;
	cin >>l>>r>>k;
	int ctr=0;
 
	for (int i=l; i<=r; i++)
	{
		if (i%k==0)
		ctr++;
	}
	cout<<ctr;
}