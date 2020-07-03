#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int N[T];
	int mod[T];
	for (int i=0; i<T; i++)
	{
		cin>> N[i];
		mod[i]=N[i]%12;
	}
	for (int i=0; i<T; i++)
	{
		switch(mod[i])
		{
			case 1:
			{
				cout<<N[i]+11<<" WS \n";
				break;
			}
			case 2:
			{
				cout<<N[i]+9<<" MS \n";
				break;
			}
			case 3:
			{
				cout<<N[i]+7<<" AS \n";
				break;
			}
			case 4:
			{
				cout<<N[i]+5<<" AS \n";
				break;
			}
			case 5:
			{
				cout<<N[i]+3<<" MS \n";
				break;
			}
			case 6:
			{
				cout<<N[i]+1<<" WS \n";
				break;
			}
			case 7:
			{
				cout<<N[i]-1<<" WS \n";
				break;
			}
			case 8:
			{
				cout<<N[i]-3<<" MS \n";
				break;
			}
			case 9:
			{
				cout<<N[i]-5<<" AS \n";
				break;
			}
			case 10:
			{
				cout<<N[i]-7<<" AS \n";
				break;
			}
			case 11:
			{
				cout<<N[i]-9<<" MS \n";
				break;
			}
			case 0:
			{
				cout<<N[i]-11<<" WS \n";
				break;
			}
		}
	}
}