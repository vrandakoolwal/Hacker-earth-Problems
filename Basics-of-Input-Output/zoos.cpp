#include <iostream>
using namespace std;
 
int main()
{
	char word[20];
	cin >>word;
	int x=0, y=0;
 
	for (int i=0; i<20; i++)
	{
		if (word[i]=='z')
		x++;
		else if (word[i]=='o')
		y++;		
	}
 
	if (2*x==y)
	cout<<"Yes";
	else 
	cout<<"No";	
}