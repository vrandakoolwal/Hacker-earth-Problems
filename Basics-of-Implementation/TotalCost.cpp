#include <iostream>
using namespace std;
int main()
{	
    int p,s,t,h;
    int x;
    cin>>p>>s>>t>>h>>x;
    long int sum=0;
    while (x--)
    {
        if (s<=t)
        {
            sum+=h;
        }
        else    
        {
            sum+=p;
        }
        s--;
    }
    cout<<sum<<endl;
}	