#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() 
{
	int N; 	//number of elements of array
	cin>>N;
	
	int A[N];	//array of size N
	for (int i=0; i<N; i++)
	{
		cin>> A[i];
	}
 
	long int value= (int)(pow(10,9)+7);
	long int answer=1;
	for (int i=0; i<N; i++)
	{
		answer= answer*A[i]%value;
	}
	cout<< answer;
 
}