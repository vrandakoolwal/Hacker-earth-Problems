#include <iostream>
using namespace std;
int main()
{
	char input[150];
	cin>>input;
	int x=0, y=0;
	for (int i=0; input[i]!='\0'; i++)
	{
		if (input[i]=='L')
		x--;
		if (input[i]=='R')
		x++;
		if (input[i]=='D')
		y--;
		if (input[i]=='U')
		y++;
	}
	cout<<x<<' '<<y;
}