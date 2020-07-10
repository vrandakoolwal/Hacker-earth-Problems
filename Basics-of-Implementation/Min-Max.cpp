#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	int minNo=100, maxNo=1;
	for (int i=0; i<n; i++)
	{
		cin>>array[i];
		if (array[i]>maxNo)
			maxNo=array[i];
		if (array[i]<minNo)
			minNo=array[i];
	}
	int checkingArray[100]={0};
	for (int i=0; i<n; i++)
	{
	    checkingArray[array[i]]++;
	}
	bool numberNotPresent=false;
	for (int i=minNo; i<=maxNo; i++)
	{
        if (checkingArray[i]==0)
        {
            numberNotPresent=true;
            break;
        }
        else 
        {
            numberNotPresent=false;
        }    
	}
	if (numberNotPresent==false)
        cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	

}