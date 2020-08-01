#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    unsigned int numbers[n];
    unsigned int sum,newnumber=0;
    for (unsigned int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }
    
    if (numbers[n-1]%10==0)
    cout<<"Yes";
    else
    cout<<"No";
}