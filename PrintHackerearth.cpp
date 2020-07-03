#include <iostream>
using namespace std;
int main()
{
	long n;
	cin>>n;
	char str[n+1];
	cin>>str;
	int alphabets[26];
	for (int i=0; i<26; i++)
	alphabets[i]=0;

	for (long j=0; j<n+1; j++)
	alphabets[str[j]-97]++;
	int quotientArray[7];
	quotientArray[0]=alphabets['h'-97]/2;
	quotientArray[1]=alphabets['a'-97]/2;
	quotientArray[2]=alphabets['c'-97]/1;
	quotientArray[3]=alphabets['k'-97]/1;
	quotientArray[4]=alphabets['e'-97]/2;
	quotientArray[5]=alphabets['r'-97]/2;
	quotientArray[6]=alphabets['t'-97]/1;

	int min=quotientArray[0];
	for (int i=0; i<7; i++)
	{
		if (quotientArray[i]<min)
			min=quotientArray[i];
	}
	cout<<min<<endl;
}
