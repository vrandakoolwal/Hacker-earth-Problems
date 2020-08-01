#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int number[N];
	for (int i=0; i<N; i++)
		cin>> number[i];
	for (int i=0; i<N; i++)
		cout<< number[i]<<" ";
}