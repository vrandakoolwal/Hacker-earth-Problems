#include <iostream>
using namespace std;
int main()
{
	char ISBN[11];
	cin>>ISBN;
	int len=0, sum=0;
	for (int i=0; ISBN[i]!='\0'; i++)
		len++;
	if (len!=10)
		cout<<"Illegal ISBN";
	else
	{
		for (int i=0; i<10; i++)
			sum+=(i+1)*ISBN[i];
	
	
	if(sum%11 == 0)
		cout<<"Legal ISBN \n";
	else
		cout<<"Illegal ISBN \n";
	}
}