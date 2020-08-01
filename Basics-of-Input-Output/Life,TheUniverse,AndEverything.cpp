#include <iostream>
using namespace std;
int main()
{
	for (unsigned int i=1; i<10000; i++)
	{
		int n;
		cin>>n;
		if (n==42)
		break;
		else 
		cout<<n<<endl;
	}	
}
