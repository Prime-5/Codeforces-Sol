#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,e,j,sum=0;
    cin>>n;
    int a[n], b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    
    for(i=0;i<n;i++)          //Sum of the no. of times an element of first array appears in second.
    {
        e=a[i];
        for(j=0;j<n;j++)
        {
            if(b[j]==e)
                sum++;
        }
    }
    
    cout<<sum;
    return 0;
}
