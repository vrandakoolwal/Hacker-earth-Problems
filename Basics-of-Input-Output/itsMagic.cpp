#include <iostream>
using namespace std; 
int main()
{
	int N;
	cin>>N;
	int A[N];
	unsigned long sum=0;
	unsigned long sumAfterRemoval;
	int i;
	int index=-1;
	for (i=0; i<N; i++)
	{
		cin>>A[i];
		sum+=A[i];
		
	}
	unsigned long store=1000000000;
	for (i=0; i<N; i++)
	{
		sumAfterRemoval=sum-A[i];
		if (sumAfterRemoval%7==0 && A[i]<store)
		{	
			store=A[i];
			index=i;
			
		}	
	}
	cout<<index;
}