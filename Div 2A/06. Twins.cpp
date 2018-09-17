#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n],sum=0,t=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    int half=(sum)/2 + 1;
    
    sort(a,a+n);
    
    /*
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    */
    
    for(i=n-1;i>=0;i--)
    {
        t+=a[i];
        if(t>=half)
        {   cout<<n-i;
            break;
        }
    }
    
    return 0;
    
    
}
