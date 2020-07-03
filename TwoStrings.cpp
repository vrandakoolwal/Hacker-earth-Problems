#include <iostream>
using namespace std;
int main()
{
	char string1[100000], string2[100000];
	int T;
	cin>>T;
	while(T--)
	{
		cin >> string1 >> string2;
		int alphabetArray1[26]={0}, alphabetArray2[26]={0};

		for (int i=0; string1[i]!='\0'; i++)
		{
			alphabetArray1[string1[i]-97]++;
			alphabetArray2[string2[i]-97]++;
		}

		bool isElementsame=true;
		for (int i=0; i<26; i++)
		{
			if (alphabetArray1[i]!=alphabetArray2[i])
			{
				isElementsame=false;
				break;
			}
		
		}
		if (isElementsame==false)
			cout<<"NO \n";
		else 
			cout<<"YES \n";
	}
}