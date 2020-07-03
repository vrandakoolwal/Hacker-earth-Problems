#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i=n+1; i<n+120; i++)
	{
		if (i%3==0)
			continue;
		if (i%10==3)
			continue;
		if (i%10==3 || (i%100 <40 && i%100 >=30))
			continue;
		
		else 
		{
			cout<<i;
			break;
		}
	}
}