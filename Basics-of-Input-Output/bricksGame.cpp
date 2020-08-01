#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int patlu=0,motu=0;
	int sum;
	bool isPatluLast=false;
	for (int i=1; i<=N; i++)
	{
		patlu=i;
		motu=i*2;
		sum+=patlu;
		if (sum>=N)
		{
			isPatluLast=true;
			break;
		}
		sum+=motu;
		if (sum>=N)
		{
			isPatluLast=false;
			break;
		}
	}
	if (isPatluLast==true)
		cout<<"Patlu"<<endl;
	else 
		cout<<"Motu"<<endl;
}