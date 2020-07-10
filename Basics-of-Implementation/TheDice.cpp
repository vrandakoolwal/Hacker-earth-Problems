#include <iostream>
using namespace std;
int main()
{
	char str[100001];
	unsigned int girl=0, len=0;
	bool flag=false;
	
	cin>>str;

	for (unsigned int i=0; str[i]!='\0'; i++)
	len++;
	for (unsigned int i=0; i<len; i++)
	{
		if (str[i]!='6' && str[i]<'7' && str[i]>'0')
		girl++;
		else if (str[i]>'6' || str[i]<'1' || str[len-1]=='6')
		flag=true;
	}
	if (flag==true)
	cout<< "-1";
	
	else 
	cout<<girl;
}