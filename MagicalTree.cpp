#include <iostream>
using namespace std;
int main()
{
	int numberOfLeaves;
	cin>>numberOfLeaves;
	int sum[numberOfLeaves]={0};
	for (int j=0; j<numberOfLeaves; j++)
		{
		    char expression[10000];
		    cin>>expression;
			sum[j]=expression[0]-48;
			for (int i=1; expression[i]!='\0'; i++)
			{
				if (i%2==1) 
				{
					if (expression[i]=='+')
					sum[j]+=expression[i+1]-48;
					else if (expression[i]=='-')
					sum[j]-=expression[i+1]-48;
				}
			}
		}
	int max=sum[0];
	for (int i=0; i<numberOfLeaves; i++)
	{
		if (sum[i]>max)
	    	max=sum[i];
	}
	cout<<max<<endl;
}