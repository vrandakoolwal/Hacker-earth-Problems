#include <iostream>
using namespace std;
int numbers(char str[10000], int *p, int count)
{
    // int count=0;
    // cout<<*p<<endl;
    count++;
    for (int i=*p; str[i]<='9'; i++)
    {
        *p+=1;
    }
    return count;

}
int main()
{	
    int t;
    cin>>t;
    
    while (t--)
    {
        
        int n;
        cin>>n;
        char str[n];
        cin>>str;
        int z=0, count=0;
        for (int i=0; i<n; i++)
        {
            if (str[i]>='0' && str[i]<='9')
                count=numbers(str, &i, count);
        }
        cout<<count<<endl;
    }
}	