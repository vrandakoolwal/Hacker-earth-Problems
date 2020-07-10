#include <iostream>
using namespace std;
int main()
{
    long n;
    unsigned int q;
    cin>>n>>q;
    unsigned int array[n];
    for (long int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    while (q--)
    {
        unsigned int queries[3];
        for (int i=0; i<3; i++ )
        {
            cin>>queries[i];
        }
        if (queries[0]==1)
        {
            array[queries[1]]=queries[2];
        }
        else if (queries[0]==2)
        {
            long int sum=0;
            if (queries[1]>=0 && queries[2]<n)
            {
                for (int i= queries[1]; i<=queries[2]; i++)
                    sum+=array[i];
                cout<<sum<<endl;
            }
            else 
                cout<<"-1 \n";
        }
    }
}
