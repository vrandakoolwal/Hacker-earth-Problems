#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		int N; 
		unsigned int M;
		cin>>N>>M;
		if (M%N==0)
			cout<<"Yes \n";
		else
			cout<<"No \n";
	}
}