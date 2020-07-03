#include <iostream>
using namespace std;
void checkNumber(char binary[101])
{
	int ctr0, ctr1;
	bool flag=false;
	for (int i=0; binary[i]!='\0'; i++)
	{
		ctr0=0, ctr1=0;
		for (int j=i; j<i+6; j++)
		{
			if (binary[j]=='0')
			{
				ctr0++;
			}
			if (binary[j]=='1')
			{
			    ctr1++;
			}
		}
    	if (ctr0==6 || ctr1==6)
    	{
    	    flag=true;
    	    break;
    	}
    	else 
    	{
    	    continue;
    	}
	}
	if (flag==true)
	    cout<<"Sorry, sorry! \n";
	else
	    cout<<"Good luck! \n";
	
	
} 
int main()
{
	char binary[101];
	cin>>binary;
	checkNumber(binary);
}
