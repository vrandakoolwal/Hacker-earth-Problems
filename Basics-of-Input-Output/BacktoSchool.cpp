#include <iostream>
using namespace std;
int main()
{
	int numbers[3];
	for (int i=0; i<3; i++)
	cin>>numbers[i];
	int max=numbers[0];
	for (int i=0; i<3; i++)
	{
		if (numbers[i]>=max)
		max=numbers[i];
	}
	cout<<max;
}