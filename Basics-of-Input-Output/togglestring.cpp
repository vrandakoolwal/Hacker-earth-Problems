#include <iostream>
 
using namespace std;
 
int main()
{
	char S[100];
	cin >> S;
	int length=0;
	for (int i=0; S[i]!='\0'; i++)
		length++;
	bool isAlphabet=false;
	for (int i=0; i<length; i++)
	{
		if (S[i]>=65 && S[i]<=90)
		{
			S[i]=S[i]+32;
			isAlphabet=true;
		}
		else if (S[i]>=97 && S[i]<=122)
		{
			S[i]=S[i]-32;
			isAlphabet=true;
		}
		else 
			isAlphabet=false;
	}
	if (isAlphabet==true)
	cout<<S;
	else 
	cout<<endl;
}