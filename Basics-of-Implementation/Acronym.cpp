#include <iostream>
using namespace std;
int main()
{	
    int n;
    cin>>n;
    string dislike[n];
    for (int i=0; i<n; i++)
    {
        cin>>dislike[i];
    }
    int length;
    cin>>length;
    string sentence[length];
    for (int i=0; i<length; i++)
    {
        cin>>sentence[i];
        for (int j=0; j<n; j++)
        {
            if (dislike[j]==sentence[i])
                sentence[i]="";
        }
    }
    char ch[2*length];
    int k=0;
    for (int i=0; i<length; i++)
    {
        if (sentence[i]!="")
        {
            ch[k]=toupper(sentence[i].at(0));
            ch[k+1]='.';
            k+=2;
        }
    }
    for (int i=0; i<k-1; i++)
    cout<<ch[i];
    
    
}	