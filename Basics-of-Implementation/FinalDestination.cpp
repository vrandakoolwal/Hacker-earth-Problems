#include <iostream>
using namespace std;
int main()
{
	char s[100001];
	cin>>s;
	int x=0, y=0;
	for (int i=0; s[i]!='\0'; i++)
	{
		if (s[i]=='L')
			x--;
		else if (s[i]=='R')
			x++;
		else if (s[i]=='U')
			y++;
		else if (s[i]=='D')
			y--;
	}
	cout<< x<<' '<<y<<endl;
}