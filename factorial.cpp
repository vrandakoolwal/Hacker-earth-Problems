#include <iostream>
 
using namespace std;
int main()
{
	int num;
	cin>>num;
	//cout<<"Input number is "<< num<< endl;
	int factorial=1;
	if (num>=1 && num<=10)
	{
		for (int i=1; i<=num; i++)
		{
			factorial*=i;
		}
		cout<<factorial<<endl;
	}
 
}