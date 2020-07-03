#include <iostream>
 
using namespace std;
int main()
{
	char S[100];
	cin>>S;
	int length =0;
	for (int i=0; S[i]!= '\0'; i++ )
	length++;
	bool isPalindrome= false;
	for (int i=0; i<length/2; i++)
	{
		if(S[i]==S[length-i-1])
		isPalindrome=true;
		else 
		isPalindrome=false;
	}
	if (isPalindrome==true)
		cout<<"YES \n";
	else
		cout<<"NO \n";
}