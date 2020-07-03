#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long int number[n], sum1=0, sum2=0, sum3=0;
	for (int i=0; i<n; i++)
	{
		cin>>number[i];
	}
	for (int i=0; i<n; i++)
	{
		if ((i+1)%3==1)
		{
			sum1+=number[i];
		}
		else if ((i+1)%3==2)
		{
			sum2+=number[i];
		}
		else if ((i+1)%3==0)
		{
			sum3+=number[i];
		}
	}
	cout<<sum1<<' '<<sum2<<' '<<sum3<<endl;

}