#include <iostream>
using namespace std;
int main()
{
	char S[101];
	cin>>S;
	int sum=0;
	for (int i=0; S[i]!='\0'; i++)
	{
		sum+=S[i]-96;
	}
	cout<<sum;
}
