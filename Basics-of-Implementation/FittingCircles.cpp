#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long a, b;
        cin>>a>>b;
        if (a>b)
            cout<<a/b<<endl;
        else 
            cout<<b/a<<endl;
    }	
}	