#include <iostream>
using namespace std; 
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        char s[101];
        char snake[140];
        cin>>s;
        if (s[0]>=65 && s[0]<=90)
        {
            s[0]+=32;
            cout<<s[0];
        }
        else 
            cout<<s[0];
        for (int i=1; s[i]!='\0'; i++)
        {
            
            if (s[i]>=65 && s[i]<=90)
            {
                cout<<'_';
                s[i]=s[i]+32;
                cout<<s[i];
            }
            else
                cout<<s[i];

        }
        cout<<endl;
        
    }
}