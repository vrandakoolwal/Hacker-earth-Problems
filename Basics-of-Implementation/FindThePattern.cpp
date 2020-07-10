#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int array[n],temp;
	for (int i=0; i<n; i++)
		cin>>array[i];
	
	for (int j=0; j<n; j++)
	{
		for (int i=0; i<n-1; i++)
		{
			if (array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	cout<<array[0]+array[n-1]<<endl;
}